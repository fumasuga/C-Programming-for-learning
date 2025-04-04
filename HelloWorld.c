#include <stdio.h>
#include <string.h>

int main() {

    char str1[] ="Mikel";
    char str2[] ="Fox";

    strlwr(str1); // Convert to lowercase
    // strupr(str2); // Convert to uppercase
    // strcat(str1, str2); // Concatenate strings
    // strncat(str1, str2, 3); // Concatenate first 3 characters of str2 to str1
    // strcpy(str1, str2); // Copy str2 to str1
    // strncpy(str1, str2, 3); // Copy first 3 characters of str2 to str1

    // strset(str1, 'a'); // Set all characters in str1 to 'a'
    // strnset(str1, 'b', 3); // Set first 3 characters of str1 to 'b'
    // strrev(str1); // Reverse str1

    // int result = strlen(str1); // Get length of str1
    // int result = strcmp(str1, str2); // Compare str1 and str2
    // int result = strncmp(str1, str2, 3); // Compare first 3 characters of str1 and str2
    // int result = strcmp(str1, str2); // Compare str1 and str2
    // int result = stricmp(str1, str2); // Case-insensitive compare str1 and str2

    printf("str1: %s\n", str1);
    return 0;
}