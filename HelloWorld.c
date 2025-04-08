#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    srand(time(NULL)); // Seed the random number generator
    int random_number1 = rand() % 100; // Generate a random number between 0 and 99
    int random_number2 = rand() % 100;
    int random_number3 = rand() % 100;
    printf("Random number: %d\n", random_number1);
    printf("Random number: %d\n", random_number2);
    printf("Random number: %d\n", random_number3);
    return 0;
}