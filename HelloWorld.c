#include <stdio.h>

// This program asks the user for their name and age, then prints a greeting message.
void hello(char name[], int age) {
    printf("Hello, %s!\n", name);
    printf("You are %d years old.\n", age);
}

int main() {

    char name[20];
    int age;

    printf("what is your name? ");
    scanf("%s", name);
    printf("How old are you? ");
    scanf("%d", &age);

    hello(name, age);
    return 0;
}