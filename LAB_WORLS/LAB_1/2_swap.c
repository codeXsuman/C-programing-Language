// swapping using third varriable
#include <stdio.h>
int main () {
    int a, b, temp;
    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    temp = a; // logic
    a = b;
    b = temp;
    printf("value of a is %d and value of b is %d\n", a,b);
    return 0;
}