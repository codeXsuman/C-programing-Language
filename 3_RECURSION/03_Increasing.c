#include <stdio.h>
void incr (int x, int n) {
    if (x > n) { // base case
        return; // stop recursion
    } else {
        printf("%d\n", x);
        incr(x+1, n);
    }
}
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    incr(1,n); // calling increasing function
    return 0;
}