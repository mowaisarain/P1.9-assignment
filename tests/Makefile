# -*- Makefile -*-
SHELL=/bin/sh
CC=gcc
CFLAGS=-Wall -g -O3 -fomit-frame-pointer #-ffast-math 
LDLIBS=-lm

# list of source files
SRC=input.c c_unit_test_d.c


VPATH=../src
OBJ=$(SRC:%.c=%.o)

default: c_unit_test_d.x 

clean:
	rm -f *.mod *.o *.x

# linker rule
c_unit_test_d.x: $(OBJ)
	$(CC) -o $@ $(CFLAGS) $^ $(LDLIBS)

# compilation pattern rule for objects
%.o: %.c
	$(CC) -c $(CFLAGS) $<

# dependencies
#ljmd.o: ljmd.c

