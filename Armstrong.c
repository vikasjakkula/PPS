// Armstrong number calculator
#include <stdio.h>
#include <math.h>

int main() {
    int n, original, temp, r, sum = 0, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    original = n;  // Store original number for final comparison
    temp = n;      // Use temp for counting digits
    
    // First loop: Count the number of digits
    while(temp != 0) {
        count++;
        temp = temp / 10;
    }
    
    temp = n;  // Reset temp to original number
    
    // Second loop: Calculate sum of digits raised to power of count
    while(temp != 0) {
        r = temp % 10;                    // Extract last digit
        sum = sum + pow(r, count);        // Add digit^count to sum
        temp = temp / 10;                 // Remove last digit
    }
    
    // Compare calculated sum with original number
    if(sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
    
    return 0;
}