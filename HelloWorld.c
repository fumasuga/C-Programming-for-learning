#include <stdio.h>
#include <ctype.h>

int main() {

    char question[][100] = {
        "1.What year did the C language debut?",
        "2.Who is the creator of the C language?",
        "3.What is the predecessor of C?",
    };

    char options[][100] = {
        "A. 1972", "B. 1970", "C. 1980", "D. 1990",
        "A. Dennis Ritchie", "B. Brian Kernighan", "C. Ken Thompson", "D. Bjarne Stroustrup",
        "A. Objective-C", "B. B", "C. C++", "D. Java",
    };

    char answers[3] = {'A', 'A', 'B'};
    int numberOfQuestions = sizeof(question) / sizeof(question[0]);

    char guess;
    int score = 0;

    printf("*****************************************\n");
    printf("Welcome to the C Quiz!\n");
    printf("*****************************************\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("%s\n", question[i]);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i * 4 + j]);
        }
        printf("Enter your answer (A, B, C, D): ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!\n\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n\n", answers[i]);
        }
    }
    printf("*****************************************\n");
    printf("You scored %d out of %d.\n", score, numberOfQuestions);
    printf("*****************************************\n");
    return 0;
}