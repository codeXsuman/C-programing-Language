#include<stdio.h>
int sum(int n) {
    if (n == 0) { // base case
        return 0;
    } else {
        return n + sum(n - 1);
    }
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s = sum(n);
    printf("Sum of %d is %d\n", n, s);
    return 0;
}