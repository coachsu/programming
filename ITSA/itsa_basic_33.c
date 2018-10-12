#include<stdlib.h>      
#include<stdio.h>      
#include<string.h>      
      
int main() {        

  char data[100];        

  while(gets(data) != NULL) {        

    int count = 0;        
    double sum = 0;        
    char *token = strtok(data, " ");        

    while(token != NULL) {        
      count++;        
      sum = sum + atoi(token);        
      token = strtok(NULL, " ");        
    }        
    printf("Size: %d\n", count);        
    printf("Average: %.3f\n", sum/count);        
  }        
  return EXIT_SUCCESS;        
} 
