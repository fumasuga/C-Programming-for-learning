#include <stdio.h>

int main() {

    printf("Enter amount of numbers to be entered: ");
    int n;
    scanf("%d", &n);
    double numbers[n];
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &numbers[i]);
    }

    for(int i = 0; i < n; i++) {
        printf("Number %d: %.2f\n", i + 1, numbers[i]);
    }

    return 0;
}