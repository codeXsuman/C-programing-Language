#include<stdio.h>
int main () {
    int a, b, temp;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    // temp = a;
    // a = b;
    // b = temp;

// a = 5, b = 3
    a = a+b; // 5+3=8
    b = a-b; // 8-3=5
    a = a-b; // 8-5=3
    printf("After swapping:\na = %d\nb = %d\n", a, b); 

} 