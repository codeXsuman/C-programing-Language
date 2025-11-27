#include <stdio.h>
/*
    1
    2 3
    4 5 6
    7 8 9 10
*/
int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns:");
    scanf("%d", &cols);

    int a=1; // counter variable
    for (int j = 1; j <= rows; j++) {
        for (int i = 1; i <= j; i++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}