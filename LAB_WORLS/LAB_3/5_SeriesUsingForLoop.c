#include<stdio.h>
int main() {
    int n, i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("%d\n", i);
    }
}