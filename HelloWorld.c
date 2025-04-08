#include <stdio.h>
#include <string.h>

// struct is a user-defined data type in C that allows grouping of variables of different types
struct  Hero {
    char name[20];
    int age;
    float height;
};

int main() {

    struct Hero hero1;
    struct Hero hero2;

    strcpy(hero1.name, "Superman");
    hero1.age = 30;
    hero1.height = 6.2;

    strcpy(hero2.name, "Batman");
    hero2.age = 35;
    hero2.height = 6.0;

    printf("Hero 1: %s, Age: %d, Height: %.1f\n", hero1.name, hero1.age, hero1.height);
    printf("Hero 2: %s, Age: %d, Height: %.1f\n", hero2.name, hero2.age, hero2.height);
    return 0;
}