// Given an array of integers, change the value of all odd index elements to its second multiple and increment all even indexed value by 10.
#include <stdio.h>
int main () {
    int n;

    // Input the size of array
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    printf("Enter %d elements of array:\n", n);
    for (int i = 0; i < n; i++) { //
        scanf("%d", &arr[i]); // Input each element
    }

    // Modify the array as per the given conditions
    for (int i = 0; i < n; i++) { // Traverse through all array elements
        if (i % 2 == 0) { // Check for even index
            arr[i] += 10;
            // printf("%d ", arr[i]);
        }
        else {
            arr[i] *= 2; // Check for odd index
            // printf("%d ", arr[i]);
        }
        printf("%d ", arr[i]); // shortcut to print
    }
    // printf("Modified array elements:\n");
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]); // Print modified array elements
    // }

    return 0;
}