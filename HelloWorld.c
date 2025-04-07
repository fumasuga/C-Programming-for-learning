#include <stdio.h>
#include <string.h>

int main() {

    char car[][20] = {"BMW", "Mercedes", "Audi", "Porsche"};
    // cars[0] = "Toyota";
    strcpy(car[0], "Toyota"); // Copying string into the first element of the array

    for(int i = 0; i < sizeof(car)/sizeof(car[0]); i++) {
        printf("%s\n", car[i]);
    }

    return 0;
}