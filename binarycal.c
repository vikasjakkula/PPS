// Binary Calculator

#include <stdio.h>

int main() {
    int a = 0, b = 1, c, num, i;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    printf("Fibonacci Series: %d, %d", a, b);

    for (i = 2; i < num; i++) {
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    return 0;
}