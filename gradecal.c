// grade calculator for marks in btw 0-100


// method- 1

#include <stdio.h>
int main(){
    float marks;
    printf("Enter markes (0-100): \n");
    scanf("%f", &marks);

    if (marks>90 && marks<=99)
    printf("A Grade\n");
    else if (marks>80 && marks<=89)
    printf("B Grade\n");
    else if (marks>70 && marks<=79)
    printf("C Grade\n");
    else if (marks>60 && marks<=69)
    printf("D Grade\n");
    else if (marks>50 && marks<=59)
    printf("E Grade\n");
    else if (marks>40 && marks<=49)
    printf("F Grade\n");
    else if (marks>30 && marks<=39)
    printf("B Grade\n");
    else 
    printf("Failed\n");

    return 0;
}