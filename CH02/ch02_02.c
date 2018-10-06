#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

int main(void) {
    uint64_t stdId[60];
    printf("uint64_t requires %lu bytes.\n", sizeof(uint64_t));
    printf("stdId requires %lu bytes.\n", sizeof(stdId));
    return EXIT_SUCCESS;
}
