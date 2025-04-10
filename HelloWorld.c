#include <stdio.h>

int main() {

    int x = 6; // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0; // 0 = 00000000

    // Bitwise AND
    z = x & y; // 00000110 & 00001100 = 00000100 = 4
    printf("Bitwise AND: %d\n", z); // Output: 4

    // Bitwise OR
    z = x | y; // 00000110 | 00001100 = 00001110 = 14
    printf("Bitwise OR: %d\n", z); // Output: 14

    // Bitwise XOR
    z = x ^ y; // 00000110 ^ 00001100 = 00001010 = 10
    printf("Bitwise XOR: %d\n", z); // Output: 10

    // Bitwise NOT
    z = ~x; // ~00000110 = 11111001 = -7 (in two's complement representation)
    printf("Bitwise NOT: %d\n", z); // Output: -7

    // Left Shift
    z = x << 1; // 00000110 << 1 = 00001100 = 12
    printf("Left Shift: %d\n", z); // Output: 12

    // Right Shift
    z = x >> 1; // 00000110 >> 1 = 00000011 = 3
    printf("Right Shift: %d\n", z); // Output: 3
    return 0;
}