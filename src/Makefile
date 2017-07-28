CC=gcc
IDIR=../include
CFLAGS=-I $(IDIR)

ODIR=obj

LIBS=-lm

_DEPS = holamake.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = holamake.o holafunc.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

holamake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~
