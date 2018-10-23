/* CH02 > overflow.c */
#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

int main() {

    int8_t num = 125;
    uint8_t input;

    printf("Give a number (0 ~ 255) being added by int8_t 125: ");
    scanf("%hhd", &input);
    num = num + input;
    printf("125 + %d = %d\n", input, num);

    return EXIT_SUCCESS;
}
