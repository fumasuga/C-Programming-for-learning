#include <stdio.h>
#include <string.h>

int main() {

    char name[25];
    int age;

    printf("\nWhat is your name? ");
    //scanf("%s", name);
    fgets(name, sizeof(name), stdin); // Use fgets to read a string with spaces
    name[strlen(name) - 1] = '\0'; // Remove the newline character added by fgets
    printf("How old are you? ");
    scanf("%d", &age);
    printf("\nHello, %s!", name);
    printf("\nYou are %d years old.\n", age);

    return 0;
}