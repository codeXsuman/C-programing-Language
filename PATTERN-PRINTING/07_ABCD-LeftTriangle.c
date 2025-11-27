// A 
// A B 
// A B C 
// A B C D 
// everything same just change cols to i
#include<stdio.h>
int main () {
    int rows, cols;
    printf("Enter number of rows and columns:");
    scanf("%d %d", &rows, &cols);

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            int d = j+64;
            char ch = (char)d; // ch = (char)65 --> ch = 'A'
            printf("%c", ch); // ASCII value of A is 65
            printf(" "); // extra space
        }
        printf("\n");
    }
    return 0;
}
