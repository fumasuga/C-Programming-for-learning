#include <stdio.h>

int main() {

    int x = 0;
    printf("please enter a number: ");
    scanf("%d", &x);
    for (int i = 0; i <= x; i++) {
        if (i == 19) {
            continue; // Skip the number 19
        }
        if (i == 25) {
            break; // Stop the loop when i is 25
        }
        printf("%d\n", i);

    }
    return 0;
}