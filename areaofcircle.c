#include <stdio.h>
#define pi 3.14

void main()
{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = pi * radius * radius;

    printf("area= %f", area);
}