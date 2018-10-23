/* CH02 > varscope.c */
#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

int power(int, int);

int32_t globalVar = 2;

int main() {

    int32_t localVar = 4;

    if(globalVar < 100) {
        int32_t blockVar;
        blockVar = power(globalVar, localVar);
        printf("Global Var. = %d\n", globalVar);
        printf("Local  Var. = %d\n", localVar);
        printf("Block  Var. = %d\n", blockVar);
    }

    return EXIT_SUCCESS;
}

int power(int num, int exp) {
    int result = 1;

    for(int i = 0 ; i < exp ; i = i + 1) {
        result = result * num;
    }

    return result;
}
