/* Creator: Kurt M. Weber
 * Created on: 2025-02-05
 *
 * This file is part of induction, a component of the Cosmoverse.
 * Licensed under Hippocratic License with clauses:
 * HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
 * See file LICENSE for full licensing information.
 */

#include <stdio.h>
#include "../include/colors.h"

void induction_output(const char *s, const char *color) {
  if (color) {
    printf("%s%s%s", color, s, INDUCTION_COLOR_RESET);
  } else {
    printf("%s", s);
  }
}