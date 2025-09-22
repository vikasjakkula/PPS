#include <stdio.h>
#define PI 3.1416

int main()
{
    float radius, area;
    printf("Enter radius: ");
    scanf("%f", &radius);
    area = PI * radius * radius;

    printf("area= %f\n", area);

    return 0;
}