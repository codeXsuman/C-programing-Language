// // using loops
// #include <stdio.h>
// void sum(int n) {
//     int sum=0;
//     for (int i=1; i<=n; i++) {
//         sum = sum + i;
//     }
//     printf("Sum is: %d\n", sum);
//     return;
// }
// int main () {
//     int n;
//     printf("Enter a number:");
//     scanf("%d", &n);
//     sum(n);
// }

// ========VIDEO STAMP --> 1:15:00 ============
// using recursion
#include <stdio.h>
void sum (int n, int s) {
    if (n==0) {
        printf("sum is: %d", s);
        return; // base case
    }
    sum(n-1, s+n); // call
    return;
}
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n, 0); // calling sum function
    return 0;
}