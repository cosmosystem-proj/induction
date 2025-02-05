# Creator: Kurt M. Weber
# Created on: 2025-02-04

# This file is part of induction, a component of the Cosmoverse.
# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

CC = gcc
INCLUDE =
CCOPTS = 

all: induction

induction: induction.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) $(CCOPTS) $(INCLUDE) -c $< -o $@ 

clean:
	rm -f *.o *.a *.so induction