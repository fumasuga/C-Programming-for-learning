#include <stdio.h>
#include <math.h>

int main() {

    double a = sqrt(4); // srt() is a function in math.h that calculates the square root of a number
    double b = pow(2, 3); // pow() is a function in math.h that calculates the power of a number
    int c = round(2.5); // round() is a function in math.h that rounds a number to the nearest integer
    int d = ceil(2.5); // ceil() is a function in math.h that rounds a number up to the nearest integer
    int e = floor(2.5); // floor() is a function in math.h that rounds a number down to the nearest integer
    double f = fabs(-2.5); // fabs() is a function in math.h that calculates the absolute value of a number
    double g = log(10); // log() is a function in math.h that calculates the natural logarithm of a number
    double h = sin(45); // sin() is a function in math.h that calculates the sine of an angle in radians
    double i = cos(45); // cos() is a function in math.h that calculates the cosine of an angle in radians
    double j = tan(45); // tan() is a function in math.h that calculates the tangent of an angle in radians

    printf("%f\n", a);
    printf("%f\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%f\n", f);
    printf("%f\n", g);
    printf("%f\n", h);
    printf("%f\n", i);
    printf("%f\n", j);
    return 0;
}