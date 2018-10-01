#include<stdio.h>
#include<stdlib.h>

float getBMI(float, int); // Function Declaration

int main(void) {
    float height = 1.65;
    int weight = 70;
    float bmi = getBMI(height, weight); // Function Call
    printf("BMI = %f\n", bmi);
}

//Function Definition
float getBMI(float h, int w) {
    float bmi = 0;
    bmi = w / (h * h);
    return bmi;
} 
