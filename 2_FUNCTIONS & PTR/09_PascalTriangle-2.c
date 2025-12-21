// another mathematical approach to generate Pascal's Triangle
// shortest method without using functions
#include <stdio.h>
int main () {
    int n;
    printf("Enter no of lines: ");
    scanf("%d", &n);
    for (int i=0; i<n; i++) { // outer loop for lines
        for (int j=1; j<=n-i; j++) { // this loop is for spaces
            printf(" ");
        }
        int first=1;
        for (int j=0; j<=i; j++) { // this loop is for printing values
            printf("%d ", first);
            first =  first * (i-j)/(j+1); //iC(j+1)
        }
        printf("\n");
    }
    return 0;
}