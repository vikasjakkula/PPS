#include <stdio.h>
#include <math.h>

int main() {
    float ci, principal, time, rate, amount;
    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    amount = principal * pow((1 + rate / 100), time);
    ci = amount - principal;
    printf("Compound interest: %.2f\n", ci);

    return 0;
}