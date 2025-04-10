#include <stdio.h>

int main() {

    int age = 25;
    int *pAge = &age; // Pointer to the age variable

    printf("address of age variable: %p\n", &age);
    printf("address of pAge variable: %p\n", pAge); // Address of the variable pointed to by pAge

    printf("size of age variable: %d\n", sizeof(age));
    printf("size of pAge variable: %d\n", sizeof(pAge)); // Size of the pointer variable pAge

    printf("value of age variable: %d\n", age);
    printf("value of pAge variable: %d\n", *pAge); // Value at the address pointed to by pAge

    return 0;
}