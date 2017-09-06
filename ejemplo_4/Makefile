CC=gcc
IDIR=../include
SDIR=../src
CFLAGS=-I $(IDIR)
DEPS = $(IDIR)/holaheader.h
OBJ = $(SDIR)/holamain.o $(SDIR)/holafuncion.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holabinario: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
