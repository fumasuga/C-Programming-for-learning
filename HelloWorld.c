#include <stdio.h>
#include <string.h>

// typedef is used to create a new name for an existing type
// typedef char user[25]; // Define a new type 'user' as an array of 25 characters
typedef struct {
    char name[25]; // Define a new type 'user' as a structure with a character array of size 25
    int age;
} User;

int main() {

    // user user1 = "Num";

    User user1 = {"Joji", 25}; // Initialize a user structure with name "Joji" and age 25
    User user2 = {"Fox", 29}; // Initialize another user structure with name "Fox" and age 29

    printf("Hello %s\n", user1.name); // Print the name of user1
    printf("Hello %s\n", user2.name); // Print the name of user2

    return 0;
}