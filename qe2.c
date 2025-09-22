// Quadratic calculator

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2;
    printf("Enter coefficient of a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant= ( b * b- ( 4 * a * c ));
    if(discriminant ==0) {
        root1= -b /(2*a);
        printf("Real and Equal: %.2f and %.2f\n", root1, root2);
    }
    else if(discriminant > 0) {
        root1= (-b + sqrt(discriminant))/(2*a);
        root2= (-b - sqrt(discriminant))/(2*a);
        printf("Real and distinct: %.2f and %.2f\n", root1, root2);
    }
    else {
        float realPart= (-b/ (2*a));
        float imagPart= (sqrt(-discriminant) / (2*a));
        printf("Complex roots: %.2f + %.2fi and %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);

    }
    return 0;
}