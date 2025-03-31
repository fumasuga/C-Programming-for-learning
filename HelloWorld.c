#include <stdio.h>
#include <stdbool.h>

int main() {
    
    char a = 'A'; // single character %c
    char b[] = "BBB"; // string %s

    float c = 3.141592; // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.14159265358979323846; // 8 bytes (64 bits of precision) 15-16 digits %lf

    bool e = true; // 1 byte (true or false) %d or %i

    char f = 100; // ASCII value of 'd' %c
    unsigned char g = 255; // 1 byte (0 to 255) %c or %d

    short int h = 32767; // 2 bytes (16 bits) %d
    unsigned short int i = 65535; // 2 bytes (0 to 65535) %d

    int j = 2147483647; // 4 bytes (32 bits) %d
    unsigned int k = 4294967295; // 4 bytes (0 to 4294967295) %u

    long long int l = 9223372036854775807; // 8 bytes (64 bits) %lld
    unsigned long long int m = 18446744073709551615; // 8 bytes (0 to 18446744073709551615) %llu
    
    printf("char a: %c\n", a);
    printf("char b: %s\n", b);
    printf("float c: %f\n", c);
    printf("double d: %lf\n", d);
    printf("bool e: %d\n", e);
    printf("char f: %c\n", f);
    printf("unsigned char g: %d\n", g);
    printf("short int h: %d\n", h);
    printf("unsigned short int i: %d\n", i);
    printf("int j: %d\n", j);
    printf("unsigned int k: %u\n", k);
    printf("long long int n: %lld\n", l);
    printf("unsigned long long int m: %llu\n", m);
    return 0;
}