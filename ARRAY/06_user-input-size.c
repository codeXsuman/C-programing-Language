#include <stdio.h>
int main () {
    
    int n;
    printf("Enter the size of the array: "); // user input for size of array
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i<=n-1; i++) { // input from user
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i<=n-1; i++) { // output the array
        printf("%d\t", arr[i]);
    }

    return 0;
}