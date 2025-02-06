/* Creator: Kurt M. Weber
 * Created on: 2025-02-03
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/induction.h"

static void *open_test_file(const char *test_library_name) {
  void *dlhandle = dlopen(test_library_name, RTLD_NOW);

  if (!dlhandle) {
    printf("Unable to open test set, exiting\n");
    exit(EXIT_FAILURE);
  }

  return dlhandle;
}

static void *pull_test_set(void *dlhandle) {
  // Documentation suggests calling dlerror() first because it's possible for a
  // return of NULL from dlsym does not necessarily indicate an error, in the
  // case where the requested symbol is found and its value is NULL.  However,
  // for our purposes, if the test set's value is NULL, it is an error anyway,
  // so we can dispense with that.
  void *test_set = dlsym(dlhandle, "test_set");

  if (!test_set) {
    printf("Unable to find test set, exiting\n");
    exit(EXIT_FAILURE);
  }

  return test_set;
}

induction_test_set *get_test_set(const char *test_library_name) {
  return (induction_test_set *)pull_test_set(open_test_file(test_library_name));
}