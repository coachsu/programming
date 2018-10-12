#include<stdlib.h>
#include<stdio.h>

int main() {

  int miles;

  while(scanf("%d", &miles) != EOF) {
    double kms = miles * 1.6;
    printf("%.1f\n", kms);
  }

  return EXIT_SUCCESS;
}
