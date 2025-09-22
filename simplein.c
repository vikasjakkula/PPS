#include <stdio.h>
int main() {
    float principal, rate, time, simpleInterest;
    printf("Enter principal, rate, time: ");
    scanf("%f %f %f", &principal, &rate, &time);

    simpleInterest= (principal* rate* time);
    printf("%.2f\n", simpleInterest);

    return 0;
}