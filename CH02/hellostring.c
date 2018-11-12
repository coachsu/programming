/* CH02 > hellostring.c */
#include<stdlib.h>
#include<stdio.h>

int main() {

    char name[10];
    char greeting[] = "Hello,";
	
    printf("Size of name[10] is %lu bytes\n", sizeof(name));
    printf("Size of greeting[] = \"%s\" is %lu bytes\n", greeting, sizeof(greeting));

    greeting[1] = 'i';
    greeting[2] = '\0';

    printf("What is your name? ");
    scanf("%s", name);
    printf("%s %s\n", greeting, name);

    return EXIT_SUCCESS;
}
