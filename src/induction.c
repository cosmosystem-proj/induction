/*
 * Creator: Kurt M. Weber
 * Created on: 2025-02-03
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#ifndef __STDC_HOSTED__
#error "induction requires a hosted environment to build and run"
#endif

#include <dlfcn.h>
#include <stdio.h>
#include <stdlib.h>
#include "../include/induction.h"
#include "../include/colors.h"

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Usage: %s FILENAME\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  void *dlhandle = dlopen(argv[1], RTLD_NOW);

  if (!dlhandle) {
    printf("Unable to open test set, exiting\n");
    exit(EXIT_FAILURE);
  }

  return EXIT_SUCCESS;
}