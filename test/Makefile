# Creator: Kurt M. Weber
# Created on: 2025-02-05

# This file is part of induction, a component of the Cosmoverse.
# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

CC = gcc
INCLUDE = 
CCOPTS = -fPIC -shared

all: test-set.so

test-set.so: test-set.o
	$(CC) $(CCOPTS) $^ -o $@

%.o: %.c
	$(CC) $(CCOPTS) -c $< -o $@ 

clean:
	rm -f *.o *.a *.so induction