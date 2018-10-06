#include<stdlib.h>
#include<stdio.h>

int main(void) {
    unsigned long stdId[60];
    printf("unsigned long requires %lu bytes.\n", sizeof(unsigned long));
    printf("stdId requires %lu bytes.\n", sizeof(stdId));
    return EXIT_SUCCESS;
}
