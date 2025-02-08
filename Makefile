# Creator: Kurt M. Weber
# Created on: 2025-02-04

# This file is part of induction, a component of the Cosmoverse.
# Licensed under Hippocratic License with clauses:
# HL3-CL-ECO-EXTR-FFD-MEDIA-MY-SUP-SV-TAL-USTA-XUAR
# See file LICENSE for full licensing information.

.PHONY: test

all:
	cd src && make all
	ln -sf src/induction induction

test:
	cd test && make all

clean:
	cd src && make clean
	cd test && make clean
	rm -f induction