//Hamming Weight — Counting the No.of 1’s in a binary number

#include <stdio.h>
int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n > 0) {
        if(n % 10 == 1) {
            count++;
        }
        n /= 10;
    }
}