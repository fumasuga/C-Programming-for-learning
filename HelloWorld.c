#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess = 0;
    int attempts = 0;
    int maxAttempts = 7; // Maximum number of attempts allowed

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a random number between 1 and 100.\n");
    printf("You have %d attempts to guess the number.\n", maxAttempts);
    printf("Good luck!\n");

    // Game loop
    while (attempts < maxAttempts) {
        printf("Attempt %d: Enter your guess: ", attempts + 1);
        scanf("%d", &guess);

        if (guess < 1 || guess > 100) {
            printf("Please enter a number between 1 and 100.\n");
            continue; // Skip the rest of the loop iteration
        }

        attempts++;

        if (guess < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempts!\n", randomNumber, attempts);
            break; // Exit the loop if the guess is correct
        }
    }
    return 0;
}