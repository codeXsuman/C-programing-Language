// odd number triangle pattern
#include<stdio.h>
/*
1
13
135
1357
*/
int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    for (int j = 1; j <= rows; j++) {// outer loop for rows and next line.
        int a=1;
        for (int i = 1; i <= j; i++) {// inner loop for main logic
            printf("%d", a);
            a=a+2;
        }
        printf("\n");
    }
    return 0;
}