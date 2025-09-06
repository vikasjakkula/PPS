// lcm of two numbers

#include <stdio.h>
int main() {
    int a, b, lcm, max;
    scanf("%d%d", &a, &b);
    if (a == 0 || b == 0) return 1;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    lcm = max;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }
    printf("%d\n", lcm);
    return 0;
}

// gcd= hcf of two numbers

#include <stdio.h>
int main() {
    int a, b, gcd;
    scanf("%d%d", &a, &b);
    if (a == 0 || b == 0) return 1;
    for (gcd = a < b ? a : b; gcd > 0; gcd--) {
        if (a % gcd == 0 && b % gcd == 0) break;
    }
    printf("%d\n", gcd);
    return 0;
}