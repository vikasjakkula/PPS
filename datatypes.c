#include <stdio.h>

int main() {
    int totalmarks;
    float averagemarks;
    char grade;
    
    printf("Enter totalmarks: ");
    scanf("%d", &totalmarks);
    
    printf("Enter averagemarks: ");
    scanf("%f", &averagemarks);
    
    printf("Enter grade: ");
    scanf(" %c", &grade);
    
    printf("\nTotalmarks: %d", totalmarks);
    printf("\nAveragemarks: %.2f", averagemarks);
    printf("\nGrade: %c", grade);
  return 0;
  
}