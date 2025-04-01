#include <stdio.h>

int main() {

    int age;

    printf("\nHow old are you?");
    scanf("%d", &age);

    if(age >= 20){
        printf("You are an adult.\n");
    } else if(age >= 13 && age < 20){
        printf("You are a teenager.\n");
    } else if(age >= 0 && age < 13){
        printf("You are a child.\n");
    } else {
        printf("Invalid age.\n");
    }

    return 0;
}