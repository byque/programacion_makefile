#include <stdio.h>
#include <ej_lib.h>

int main(int argc, char* argv[]) {

  double v1, v2, p;

  v1 = 5.2;
  v2 = 7.9;

  p = promedio(v1, v2);

  printf("El promedio de %3.2f y %3.2f es %3.2f\n", v1, v2, p);

  return 0;
}
