#include <stdio.h>

int main() {

    // array is a collection of data items of the same type
    double scores[] = {85.5, 90.0, 78.5, 92.0, 88.0};
    double average = 0.0;
    
    printf("english score is %.2f\n", scores[0]);
    printf("math score is %.2f\n", scores[1]);
    printf("science score is %.2f\n", scores[2]);
    printf("history score is %.2f\n", scores[3]);
    printf("art score is %.2f\n", scores[4]);
    average = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4]) / 5.0;
    printf("average score is %.2f\n", average);
    return 0;
}