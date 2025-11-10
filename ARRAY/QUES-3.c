#include <stdio.h>
// Find the maximum value out of all the elements in the array.
int main() {
    int arr[7] = {11, 67, 23, 89, 2, 90, 45};
    int max=arr[0]; // Initialize max to a very small number
    for (int i = 0; i < 7; i++) {
        if (max<arr[i]) {
            max=arr[i];  // if 11<67 then max=67, if 67<23(false), if 67<89 then max=89 and so on...
        }
    }
    printf("The maximum value in the array is: %d\n", max);
    return 0;
}