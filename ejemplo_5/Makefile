CC=gcc
IDIR=../include
SDIR=../src
CFLAGS=-I $(IDIR)

ODIR=../src/obj

LIBS=-lm

_DEPS = holamake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = holamake.o holafunc.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: $(SDIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holamake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
