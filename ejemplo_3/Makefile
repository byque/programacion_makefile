CC=gcc
IDIR=../include
SDIR=../src
CFLAGS=-I $(IDIR)
DEPS = $(IDIR)/holaheader.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holaregla: $(SDIR)/holamain.o $(SDIR)/holafuncion.o
	$(CC) -o holabinario $(SDIR)/holamain.o $(SDIR)/holafuncion.o $(CFLAGS)
