/* ch02_03.c */
#include<stdlib.h>
#include<stdio.h>

int globalNum = 100;

int main(void) {
    int localNum = 200;

    if(localNum > globalNum) {
        int blockNum = 300;
        localNum = blockNum;
        globalNum = localNum;
    }

    printf("Global num = %d\n", globalNum);
    printf("Local num = %d\n", localNum);
    //printf("Block num = %d\n", blockNum);

    return EXIT_SUCCESS;
}


