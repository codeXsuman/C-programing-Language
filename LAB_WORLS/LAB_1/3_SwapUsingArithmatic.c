// swapping using arithmatic operation.
#include <stdio.h>
int main () {
    int a,b;
    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);

    a=a+b; // ex--> a=5,b=3 --> a=(5+3)=8
    b = a - b; // b = (8-3) --> 5
    a = a - b; // a = (8-5) --> 3

    printf("value of a is %d and value of b is %d\n", a,b);
    return 0;
}