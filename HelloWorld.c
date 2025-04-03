#include <stdio.h>

// Function to calculate the sum of divisors of a number
int divisor(int n) {
    int i, total = 0;
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            total += i;
        }
    }
    return total;
}

int main() {

    int n, result, divisorSum;
    printf("Enter a number: ");
    scanf("%d", &n);
    divisorSum = divisor(n);
    if (divisorSum == n*2) {
        printf("%d is a perfect number\n", n);
    } else if (divisorSum < n) {
        printf("%d is a deficient number\n", n);
    } else {
        printf("%d is an abundant number\n", n);
    }
    return 0;
}