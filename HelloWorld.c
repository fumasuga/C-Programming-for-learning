#include <stdio.h>

int main() {
    
    float item1 = 3.14;
    float item2 = 31.4;
    float item3 = 314.15;

    printf("Item 1: %8.2f\n", item1); // 8 spaces wide, 2 decimal places
    printf("Item 2: %2f\n", item2); // default width, default decimal places
    printf("Item 3: %-3.2f\n", item3); // 3 spaces wide, 2 decimal places, left-aligned
    return 0;
}