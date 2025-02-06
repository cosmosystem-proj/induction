/* Creator: Kurt M. Weber
 * Created on: 2025-02-05
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#include <stdio.h>

#include "../include/induction.h"
#include "../quanta/include/types.h"
#include "../include/colors.h"

bool run_tests(induction_test_set *tests) {
  uint64 i = 0;
  bool success = true;

  while (tests[i].test_func) {
    printf("Running test #%i: %s\n", i + 1, tests[i].description);
    if (!tests[i].test_func()) {
      printf(INDUCTION_COLOR_RED "Test %i FAILED!\n" INDUCTION_COLOR_RESET,
             i + 1);
      success = false;
    } else {
      printf(INDUCTION_COLOR_GREEN "Test %i SUCCEDED!\n" INDUCTION_COLOR_RESET,
             i + 1);
    }
    i++;
  }

  return success;
}