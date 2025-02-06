/*
 * Creator: Kurt M. Weber
 * Created on: 2025-02-05
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#include "../include/induction.h"

bool induction_test_true() { return true; }

bool induction_test_false() { return false; }

BEGIN_TEST_SET
INDUCTION_TEST(induction_test_true, "True test")
INDUCTION_TEST(induction_test_true, "False test")
END_TEST_SET