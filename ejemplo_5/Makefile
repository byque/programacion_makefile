CC=gcc
IDIR=../include
SDIR=../src
CFLAGS=-I $(IDIR)

ODIR=../src/obj

LIBS=-lm

_DEPS = holaheader.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = holamain.o holafuncion.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holabinario: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
