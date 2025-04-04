#include <stdio.h>

void hello(char[], int); // Function prototype
// Function prototype is a declaration of a function that specifies the function's name, return type, and parameters.
// It allows the compiler to check for correct usage of the function before its actual definition.
// it is typically placed before the main function or in a header file.

int main() {
    
    char name[50];
    int age;
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    hello(name, age);
    return 0;
}

void hello(char name[], int age) {
    printf("Hello, %s! You are %d years old.\n", name, age);
}