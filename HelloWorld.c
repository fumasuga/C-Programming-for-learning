#include <stdio.h>

int main() {
    
    int x = 3;
    int y = 4;

    int z = x * y; // Multiplication
    float i = x / (float)y; // Division with float cast
    int j = x % y; // Modulus
    int k = x + y; // Addition
    int l = x - y; // Subtraction
    int m = x++; // Increment
    int n = y--; // Decrement

    printf("%d\n", z);
    printf("%f\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    printf("%d\n", l);
    printf("%d\n", m);
    printf("%d\n", n);
    return 0;
}