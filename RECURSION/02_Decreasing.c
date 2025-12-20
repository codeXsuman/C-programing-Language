#include <stdio.h>
void decr (int n) {
    if (n < 0) { // base case
        return; // stop recursion
    } else {
        printf("%d\n", n);
        decr(n - 1);
    }
}
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decr(n); // calling decreasing function
    return 0;
}