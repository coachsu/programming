/* CH02 > varscope.c */
#include<stdlib.h>
#include<stdio.h>

int globalVar = 100;

int main() {

    int localVar = 200;

    if(localVar > globalVar) {
        int blockVar = 300;
        localVar = blockVar;
        globalVar = localVar;
    }

    printf("Global Var. = %d\n", globalVar);
    printf("Local Var. = %d\n", localVar);
    //printf("Block num = %d\n", blockNum);

    return EXIT_SUCCESS;
}
