/* score.c */
#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int score;
    printf("Your score is: ");
    scanf("%d", score);
    if(score >= 60) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }
    return EXIT_SUCCESS;
}
