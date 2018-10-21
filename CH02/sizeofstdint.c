/* CH02 > sizeofstdint.c */
#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

int main() {

    uint64_t stdId[60];
    printf("Type uint64_t requires %lu bytes.\n", sizeof(uint64_t));
    printf("Variable stdId requires %lu bytes.\n", sizeof(stdId));

    return EXIT_SUCCESS;
}
