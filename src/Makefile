################################################################################
# Plantilla de Makefile con funciones avanzadas                                #
################################################################################

# Éste es el nombre de los binarios que serán generados
TARGET  = holabinario

# Aquí añadimos todos los archivos *.c que se quieren compilar
CSRCS   = holafuncion.c holamain.c

# Aquí añadimos las rutas a los directorios include
IDIR    = ../include

# Aquí añadimos las librerías estándar que se van a usar
LIBS    = -lm

# Configuración del compilador
CC      = gcc
CFLAGS  = -g -std=gnu99 -Wall
LDFLAGS = -g -Wall

################################################################################
# No cambiar nada después de esta línea                                        #
################################################################################

BINDIR   = ../bin
BUILDDIR = ../build
OBJDIR   = $(BUILDDIR)/obj

# Generar el nombre de los archivos objeto
OBJS     = $(addprefix $(OBJDIR)/,$(addsuffix .o,$(basename $(CSRCS:%.c=%.o))))

# Añadir las rutas
CFLAGS   += $(IDIR:%=-I %)
LDFLAGS  += $(IDIR:%=-I %)

# Añadir las librerías estándar
CFLAGS   += $(LIBS)

# Aquí se definen los archivos generados por defecto cuando el usuario llama
# solamente 'make'
all: build size

# Crear todos los archivos y el binario
build: builddirs $(BINDIR)/$(TARGET)

# Crear los directorios requeridos (si no existen previamente)
builddirs:
	@echo
	@echo "Creando directorios..."
	@mkdir -p $(BINDIR)
	@mkdir -p $(BUILDDIR)
	@mkdir -p $(OBJDIR)

# Enlazar todo junto
$(BINDIR)/$(TARGET): $(OBJS)
	@echo
	@echo Enlazando $@
	@$(CC) $(LDFLAGS) -o $(BINDIR)/$(TARGET) $(OBJS)

# Compilar los archivos en c
$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@echo
	@echo Compilando $^
	@$(CC) $(CFLAGS) -c -o $@ $^

# Imprimir la información del tamaño
size: $(BINDIR)/$(TARGET)
	@echo
	size $^

# Limpiar código
clean:
	@echo
	@echo "Limpiando..."
	@rm -rf $(BINDIR) $(BUILDDIR) $(OBJS) $(TARGET) $(TARGET).* *.a *.o *~
	@echo
	@echo "Limpieza terminada!"

# Clean debe ser phony tal que make nunca salga de ejecución como un archivo
.PHONY: clean
