#include <stdio.h>
int main () {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int r;
    printf("Enter r: ");
    scanf("%d", &r);

    int nfact=1; // n!
    int rfact=1; // r!
    int nminusrfact=1; // (n-r)!

    for (int i=1; i<=n; i++) {
        nfact = nfact * i;
    }
    for (int i=1; i<=r; i++) {
        rfact = rfact * i;
    }
    for (int i=1; i<=n-r; i++) {
        nminusrfact = nminusrfact * i;
    }

    int nCr = nfact / (rfact * nminusrfact);
    printf("nCr = %d\n", nCr);

    return 0;
}