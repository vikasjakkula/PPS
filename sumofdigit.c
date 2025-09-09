// sum of digits in a number

#include <stdio.h>
int main() {
    int num, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

 while (num!= 0) {
    sum= num%10 + sum;
    num= num/10;
   
 } 
    printf("Sum of digits: %d", sum);
    return 0;
}