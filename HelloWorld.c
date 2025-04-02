#include <stdio.h>

int main() {

    char grade;

    printf("Enter your grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (grade) { // Switch statement to evaluate the grade
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("You can do better.\n");
            break;
        case 'D':
            printf("You need to work harder.\n");
            break;
        case 'F':
            printf("Failed. Try again.\n");
            break;
        default:
            printf("Invalid grade entered.\n");
    }

    return 0;
}