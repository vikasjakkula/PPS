// reversing a digit

#include <stdio.h>
int main() {
    int num, rem = 0, rev = 0;
    printf("Enter a number to reverse: ");
    scanf("%d", &num);

    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    printf("Reversed Number: %d", rev);

    return 0;
}