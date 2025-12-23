// write a function to calculate the nth fibonacci number using recursion.
// =================== VIDEO STAMP: 1:39:00 ===================
#include<stdio.h>
int fibonacci(int n) {
    if (n==0) {
        return 0; // base case
    }
    if (n==1) {
        return 1; // base case
    }
    int FibAns = fibonacci(n-1) + fibonacci(n-2);
    return FibAns; 
}

int main () {
    int n;
    printf("Enter the nth fibonacci number: ");
    scanf("%d", &n);
    int result = fibonacci(n); // function call
    printf("the %dth fibonacci number is %d\n", n, result);
    return 0;
}