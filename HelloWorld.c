#include <stdio.h>
#include <string.h>

int main() {

    char x[] = 'Water';
    char y[] = 'Lemonade';
    char temp[15];

    strcpy(temp, x); // Copy the value of x to temp
    strcpy(x, y);    // Copy the value of y to x
    strcpy(y, temp); // Copy the value of temp (original x) to y

    // temp = x;
    // x = y;
    // y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);
    return 0;
}