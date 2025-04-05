#include <stdio.h>

int main() {

    int rows;
    int cols;
    char symbol;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    printf("Enter the symbol to use: ");
    scanf(" %c", &symbol);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%c ", symbol);
        }
        printf("\n");
    }
    return 0;
}