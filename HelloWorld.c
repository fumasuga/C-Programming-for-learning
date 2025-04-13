#include <stdio.h>
#include <stdarg.h> // For va_list, va_start, va_end

#define BUFFER_SIZE 100 // Define a buffer size for the string

// function to print used library functions
void my_printf(const char *format, ...) {
    va_list args; // Declare a variable to hold the variable arguments
    char buffer[BUFFER_SIZE];
    int ret;

    va_start(args, format); // Initialize the va_list with the format string
    ret = vsnprintf(buffer, BUFFER_SIZE, format, args); // Format the string and store it in the buffer

    printf("%s", buffer); // Print the formatted string to stdout
    va_end(args); // Clean up the va_list
}

int main() {
    my_printf("%d, %d, %d\n", 1, 2, 3);
    return 0;
}