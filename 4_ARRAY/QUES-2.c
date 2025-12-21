#include <stdio.h>
// calculate the sum of all the elements in the given array.

int main () {
    int arr[5] = {2, 4, 6, 8, 10};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i]; // sum = 0 + 2, sum = 2 + 4,...
    }

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;

}