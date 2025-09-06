// convert celsius to fahrenheit

#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in celsius: ");
    scanf("%f", &celsius);
    
    /*formula*/
    /*c= 5/9(f-32)*/

    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in fahrenheit is %f", fahrenheit);
    return 0;

}