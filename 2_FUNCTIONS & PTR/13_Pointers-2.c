#include <stdio.h>
int main () {
    int a = 25;
    int *x = &a; // int* --> intiger ka adress store karta hai 
    int **y = &x; // int** --> intiger pointer ka adress store karta hai
    printf("%d\n", *x);
    printf("%d\n", **y);
    return 0;


}