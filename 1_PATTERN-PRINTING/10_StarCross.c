#include <stdio.h>
// *     *
//  *   *
//    *
//  *   *
// *     *
int main () {
    int n;
    printf("Enter an odd number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            if (i==j || (i+j)==(n+1)) { // condition for cross
                printf("*");
            } else {
                printf("  "); // control the wide of cross
            }
        }
        printf("\n");
    }
}