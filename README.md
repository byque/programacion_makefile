# programacion_makefile
Aprendiendo a crear Makefiles

Normalmente, se compilaría esta colección de código ejecutando el siguiente
comando (como en el ej. 1):

gcc -o holamake holamake.c holafunc.c -I.

Se incluye -I para que gcc busque archivos en el directorio actual.

El ejemplo 1-2 hace lo mismo que el ej. 1 a partir de un directorio (carpetas)
más elaborado. A partir del ejemplo 2, todos los Makefiles usan el mismo código
fuente.

Las excepciones son el ej 6 (en el que se incluye una librería estática) y
el ej. 7 (basado en el ej. 6).

Los directorios include y src, más el Makefile (disponible dentro de src),
pueden usarse como una plantilla que se puede adaptar dependiendo de las
necesidades.

Referencias:
http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
