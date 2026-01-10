// count the number of elements in given array greater than a given number x.
#include<stdio.h>
int main(){
    int n, count = 0, x;
    // Input the size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    // Input the number x
    printf("enter the number X: ");
    scanf("%d", &x);
    int arr[n];
    // Input array elements
    printf("Enter %d elements of array:\n", n);
    for (int i = 0; i < n; i++) { //
        scanf("%d", &arr[i]); // Input each element
    }
    // Count elements greater than x
    for (int i = 0; i < n; i++) {
        if (arr[i] > x) {
            count++;
        }
    }
    printf("number of elements greater than %d is %d\n", x, count);
    return 0;
}