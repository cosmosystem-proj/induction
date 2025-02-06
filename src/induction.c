/*
 * Creator: Kurt M. Weber
 * Created on: 2025-02-03
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#ifndef _INDUCTION_C
#define _INDUCTION_C

#ifndef __STDC_HOSTED__
#error "induction requires a hosted environment to build and run"
#endif

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/induction.h"
#include "../include/colors.h"

induction_test_set *get_test_set(const char *test_library_name);
bool run_tests(induction_test_set *tests);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s FILENAME\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  induction_test_set *test_set = get_test_set(argv[1]);

  if (run_tests(test_set)) {
    return EXIT_SUCCESS;
  } else {
    return EXIT_FAILURE;
  }
}

#endif