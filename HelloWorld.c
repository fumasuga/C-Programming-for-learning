#include <stdio.h>

int main() {

    char x = 'X';
    char y = 'Y';
    char z = 'Z';

    printf("%d byte\n", sizeof(x)); // 1 byte
    printf("%d byte\n", sizeof(y)); // 1 byte
    printf("%d byte\n", sizeof(z)); // 1 byte

    printf("%p\n", &x); // Address of x
    printf("%p\n", &y); // Address of y
    printf("%p\n", &z); // Address of z

    short a = 'A';
    short b = 'B';
    short c = 'C';

    printf("%d byte\n", sizeof(a)); // 2 bytes
    printf("%d byte\n", sizeof(b)); // 2 bytes
    printf("%d byte\n", sizeof(c)); // 2 bytes

    printf("%p\n", &a); // Address of a
    printf("%p\n", &b); // Address of b
    printf("%p\n", &c); // Address of c

    int d = 'D';
    int e = 'E';
    int f = 'F';

    printf("%d byte\n", sizeof(d)); // 4 bytes
    printf("%d byte\n", sizeof(e)); // 4 bytes
    printf("%d byte\n", sizeof(f)); // 4 bytes

    printf("%p\n", &d); // Address of d
    printf("%p\n", &e); // Address of e
    printf("%p\n", &f); // Address of f

    return 0;
}