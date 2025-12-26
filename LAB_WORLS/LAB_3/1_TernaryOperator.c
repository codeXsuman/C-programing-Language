#include <stdio.h>
int main() {
    int a, b, largest;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    largest = (a > b) ? a : b;
    printf("The largest number is %d\n", largest);
    return 0;
}