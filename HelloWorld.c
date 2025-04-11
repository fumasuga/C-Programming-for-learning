#include <stdio.h>

int main() {

    FILE *pF = fopen("test.txt", "w"); // Open the file in write mode
    
    fprintf(pF, "This is \n"); // Write to the file
    fprintf(pF, "a test file.\n"); // Write to the file

    fclose(pF); // Close the file

    if (remove("test.txt") == 0) { // Remove the file
        printf("File deleted successfully.\n");
    } else {
        printf("Error deleting the file.\n");
    }

    return 0;
}