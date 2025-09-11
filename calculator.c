// Calculator

#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d", a, b, a + b);
    printf("Difference of %d and %d is %d", a, b, a - b);
    printf("Product of %d and %d is %d", a, b, a * b);
    printf("Quotient of %d and %d is %d", a, b, a / b);
    printf("Remainder of %d and %d is %d", a, b, a % b);
    printf("Average of %d and %d is %d", a, b, (a + b) / 2);
    printf("Square of %d is %d", a, a * a);
    printf("Square of %d is %d", b, b * b);
    printf("Cube of %d is %d", a, a * a * a);
    printf("Cube of %d is %d", b, b * b * b);
    printf("Power of %d to %d is %d", a, b, (int)pow(a, b));
    return 0;
}