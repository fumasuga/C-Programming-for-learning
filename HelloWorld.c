#include <stdio.h>
#include <math.h>

int main() {

    double a;
    double b;
    double c;

    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    c = sqrt(a * a + b * b);
    printf("The length of the hypotenuse is: %.2f\n", c);
    return 0;
}