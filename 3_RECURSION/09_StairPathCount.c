#include <stdio.h>
int stair(int n) {
    if (n==1) return 1; // base case
    if (n==2) return 2; // base case
    int totalways = stair(n-1) + stair(n-2);
    return totalways;
}
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("Number of ways to climb %d stair is %d\n",n, ways);
    return 0;
}
// logic is same as fibonacci series.