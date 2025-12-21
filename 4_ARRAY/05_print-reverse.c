#include<stdio.h>

int main () {
    int arr[5] = {2, 4, 6, 8, 10};

    // printing in reverse order using for loop
    for (int i = 4; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }

    return 0;
}