#include <stdio.h>

enum Day {Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7};

int main() {

    // enum is a user-defined type that consists of a set of named integer constants.
    enum Day today = Wednesday;

    printf("Today is day number %d of the week.\n", today);

    if (today == Wednesday) {
        printf("It's the middle of the week!\n");
    } else if (today == Monday) {
        printf("It's the start of the week!\n");
    } else if (today == Sunday || today == Saturday) {\
        printf("It's a weekday.\n");
    } else {
        printf("It's a regular weekday.\n");
    }
    return 0;
}