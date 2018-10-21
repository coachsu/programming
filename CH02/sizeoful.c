/* CH02 > sizeoful.c */
#include<stdlib.h>
#include<stdio.h>

int main() {

    unsigned long stdId[60];  // 60 unsigned long variables
    printf("Type unsigned long requires %lu bytes.\n", sizeof(unsigned long));
    printf("Variable stdId requires %lu bytes.\n", sizeof(stdId));

    return EXIT_SUCCESS;
}
