// Binary Calculator

#include <stdio.h>
int main() {
    int decimal, num, i = 0, binary[32];

    printf("Enter a decimal number greater than zero: ");
    scanf("%d", &decimal);

    if (decimal <= 0) {
        printf("Please enter a number greater than zero.\n");
        return 1;
    }

    num = decimal;
    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("The binary number is: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}