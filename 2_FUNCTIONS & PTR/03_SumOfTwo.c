#include <stdio.h>
int add(int a, int b) {
    return a + b;
}
int main() {
    int num1, num2;
    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd numnber: ");
    scanf("%d", &num2);
    int sum = add(num1, num2); // calling add function and storing the return value in sum
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
// This code defines a simple function to add two integers and demonstrates its usage in the main function.