// Swapping two numbers without using a third variable

// #include <stdio.h>
// int main() {
//     int a, b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("After swapping: %d %d", a, b);
//     return 0;
// }

// Swapping two numbers using a constant

#include <stdio.h>
int main() {
    int num1, num2, temp;
    printf("Before swapping Numbers: \n");
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After swapping: %d %d", num1, num2);
    return 0;
}