#include<stdio.h>
#include<stdlib.h>

int main() {
  float cels;
  int fahr = 20;

  cels = (5.0 / 9.0) * (fahr - 32);
  printf("%f C = %d F\n", cels, fahr);

  return EXIT_SUCCESS;
}
