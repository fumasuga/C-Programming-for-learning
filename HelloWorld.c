#include <stdio.h>
#include <string.h>

int main() {

    char name[50];

    printf("what is your name? ");
    fgets(name, sizeof(name), stdin); // Read a line of input from the user

    name[strlen(name -1)] = '\0';
    
    while(strlen(name) == 0) {
        printf("Please enter a valid name: ");
        fgets(name, sizeof(name), stdin); // Read a line of input from the user
        name[strlen(name -1)] = '\0';
    }

    printf("Hello, %s\n", name);
    return 0;
}