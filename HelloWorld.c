#include <stdio.h>
#include <string.h>

int main() {

    int num = 0;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        sum += num;
        printf("Current sum: %d\n", sum);
        printf("Enter a number (0 to stop): ");
        scanf("%d", &num);
    } while (num != 0);
    return 0;
}