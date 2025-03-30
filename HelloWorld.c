#include <stdio.h>

int main() {
    
    int x; //declaration
    x = 5; //initialization
    int y = 10; //declaration and initialization

    int age = 25; //integer
    float gpa = 2.8; //float
    char grade = 'A'; //single character
    char name[] = "John Doe"; //array of characters (string)

    printf("Hello, %s\n", name); //%s is a format specifier for strings
    printf("You are %d years old\n", age); //%d is a format specifier for integers
    printf("Your GPA is %.2f\n", gpa); //%.2f is a format specifier for float with 2 decimal places
    printf("Your grade is %c\n", grade); //%c is a format specifier for characters
    return 0;
}