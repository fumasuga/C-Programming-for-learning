#include <stdio.h>

int main() {

    FILE *pF = fopen("test.txt", "w"); // Open the file in write mode
    
    fprintf(pF, "This is \n"); // Write to the file
    fprintf(pF, "a test file.\n"); // Write to the file

    fclose(pF); // Close the file

    FILE *pF2 = fopen("test.txt", "r"); // Open the file in read mode
    char buffer[100]; // Buffer to hold the read data
    if (pF2 != NULL) {
        while (fgets(buffer, sizeof(buffer), pF2) != NULL) { // Read the file line by line
            printf("%s", buffer); // Print the read data to the console
        }
        fclose(pF2); // Close the file
    } else {
        printf("Error opening the file for reading.\n");
    }
    
    if (remove("test.txt") == 0) { // Remove the file
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting the file.\n");
    }

    return 0;
}