#include <stdio.h>
void incr (int n) {
    if (n <= 0) { // base case
        return; // stop recursion
    } else {
        incr(n - 1); //call
        printf("%d\n", n); // code after call
    }
}
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    incr(n); // calling decreasing function
    return 0;
}