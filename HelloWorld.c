#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double radius;
    double area;
    double circumference;

    printf("\nEnter the radius of the circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}