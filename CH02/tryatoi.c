/* CH02 > tryatoi.c */
#include<stdlib.h>
#include<stdio.h>

int main() {

    char strNum[] = "123";
    printf("strNum = %s\n", strNum);
    printf("atoi(strNum) + 2 = %d\n", atoi(strNum) + 2);

    return EXIT_SUCCESS;
}
