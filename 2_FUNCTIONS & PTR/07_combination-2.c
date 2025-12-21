#include <stdio.h>
// now using functions...
int factorial(int x) {
    int fact = 1;
    for (int i = 2; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}
// also  we can creare function for nCr
// int nCr(int n, int r) {
//     int ncr = factorial(n) / (factorial(r) * factorial(n - r));
//     return ncr;
// }

int main () {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);

    //int nfact= factorial(n); // n!
    //int rfact= factorial(r); // r!
    //int nminusrfact= factorial(n-r); // (n-r)!
    // for (int i=1; i<=n; i++) {
    //     nfact = nfact * i;
    // }
    // for (int i=1; i<=r; i++) {
    //     rfact = rfact * i;
    // }
    // for (int i=1; i<=n-r; i++) {
    //     nminusrfact = nminusrfact * i;
    // }

    int nCr = factorial(n)/ (factorial(r) * factorial(n-r));
    printf("nCr = %d\n", nCr);

    return 0;
}