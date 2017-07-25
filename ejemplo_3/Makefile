CC=gcc
IDIR=../include
SDIR=../src
CFLAGS=-I $(IDIR)
DEPS = $(IDIR)/holamake.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holamake: $(SDIR)/holamake.o $(SDIR)/holafunc.o
	$(CC) -o holamake $(SDIR)/holamake.o $(SDIR)/holafunc.o $(CFLAGS)
