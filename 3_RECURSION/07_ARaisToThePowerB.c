// #include <stdio.h>
// int power(int a, int b) {
//     int x = 1; // iniciating x with 1
//     for(int i=1; i<=b; i++) {
//         x = x * a;
//     }
//     return x;
// }
// int main () {
//     int a, b;
//     printf("Enter base: ");
//     scanf("%d", &a);
//     printf("Enter power: ");
//     scanf("%d", &b);
//     int p = power(a,b);
//     printf("a rais to the power b = %d\n",p);
//     return 0;
// }

// Above is the iterative version of a rais to the power b
// Below is the recursive version of a rais to the power b
// ================= VIDEO TIMESTAMP: 1:25:00 =================
#include<stdio.h>
int power(int a, int b) {
    if(b==0) {
        return 1; // base case
    }
    return a * power(a, b-1); // recursive case 6pow2 = 6 * 6pow1
}
int main () {
    int a, b;
    printf("Enter base: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    int p = power(a,b);
    printf("%d rais to the power %d = %d\n",a,b,p);
    return 0;
}