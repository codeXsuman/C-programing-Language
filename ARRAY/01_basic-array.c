#include <stdio.h>
int main () {
    int arr[5] = {2, 4, 6, 8, 10};
    //printf("%d\n", arr[0]);
    //printf("%d\n", arr[1]);
    arr[1] = 20; // Modified the value at index 1
    //printf("%d", arr[1]);

    char name[2] = {'j', 'O'};
    printf("%c\n", name[1]);
    return 0;
}