#include <stdio.h>
/*
    1
    12
    123
    1234
*/
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &cols);

    for (int j = 1; j <= rows; j++) {
        for (int i = 1; i <= j; i++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}