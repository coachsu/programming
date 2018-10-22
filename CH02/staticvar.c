/* ch02_04.c */
#include<stdlib.h>
#include<stdio.h>
#include<stdint.h>

void count() {
    uint8_t num = 0;
    printf("num = %d\n", num);
    num = num + 1;
}

void static_count() {
    static uint8_t num = 0;
    printf("num = %d\n", num);
    num = num + 1;
}

int main(void) {

    int counter;

    printf("Set the counter: ");
    scanf("%d", &counter);

    printf("\nNormal counter\n");
    for(int c=0;c<counter;c=c+1) {count();}

    printf("\nStatic counter\n");
    for(int c=0;c<counter;c=c+1) {static_count();}
    
    return EXIT_SUCCESS;
}
