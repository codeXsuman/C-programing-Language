#include <stdio.h>
int factorial(int x){
    int fact = 1;
    for (int i = 2; i <= x; i++){
        fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    return ncr;
}
int main(){
    int n;
    printf("Enter no of lines: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n-i; j++) {
            printf(" ");
        }
        for(int k=0; k<i; k++) {
            printf("%d ", nCr(i-1, k));
        }
        printf("\n");
    }
    return 0;
}