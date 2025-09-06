#include <stdio.h>
int main() {
    printf("Enter a number: ");
    int num;
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("Even");
    } else {
        printf("Odd");
    }
    return 0;
}