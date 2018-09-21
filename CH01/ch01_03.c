#include<stdio.h>
#include<stdlib.h>

int main(void) {
  int fahr;
  printf("Give a Fahrenhit temperature: ");
  scanf("%d", &fahr);
  printf("The Fahrenhit temperature you given is %d\n", fahr);

  return EXIT_SUCCESS;
}
