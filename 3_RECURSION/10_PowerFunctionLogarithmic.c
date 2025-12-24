// =============== VIDEO STAMP: 2:03:50 ===================
#include<stdio.h>
int powerlog(int a, int b) {
    if(b==0) {
        return 1; // base case
    }
    if (b%2 == 0) {
        int x = powerlog(a, b/2);
        // int recAns = powerlog(a, b/2) * powerlog(a, b/2); // recursive case
        int recAns = x * x;
        return recAns;
    }
    else {
        int x = powerlog(a, b/2);
        return x * x * a; // recursive case
    }
}
int main () {
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    int p = powerlog(a,b);
    printf("%d rais to the power %d = %d\n",a,b,p);
    return 0;
}