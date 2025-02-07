/* Creator: Kurt M. Weber
 * Created on: 2025-02-05
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#ifndef INDUCTION_INDUCTION_H
#define INDUCTION_INDUCTION_H

#include "../quanta/include/types.h"

typedef bool (*induction_test)();

typedef struct induction_test_set {
  induction_test test_func;
  const char *description;
} induction_test_set;

#define BEGIN_TEST_SET induction_test_set test_set[] = {

#define INDUCTION_TEST(test_func, desc) {(test_func), (desc)},

#define END_TEST_SET                                                           \
  {0, 0}}                                                                      \
  ;

#endif