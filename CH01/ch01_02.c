#include<stdio.h>
#include<stdlib.h>

int main(void) {
    float x = 1.65;
    int y = 70;
    float z;
    z = y / x;
    z = z / x;
    printf("z = %f\n", z);
    return EXIT_SUCCESS;
}
