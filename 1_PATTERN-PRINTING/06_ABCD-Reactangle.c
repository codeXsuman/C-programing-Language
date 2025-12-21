/*
A B C D
A B C D 
A B C D 
A B C D 
*/
#include<stdio.h>
int main () {
    int rows, cols;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &rows, &cols);

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=cols; j++) {
            int d = j+64;
            char ch = (char)d; // ch = (char)65 --> ch = 'A'
            printf("%c", ch); // ASCII value of A is 65
            printf(" "); // extra space
        }
        printf("\n");
    }
    return 0;
}