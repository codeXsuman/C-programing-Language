#include <stdio.h>
int main () {
    int arr[5] = {2, 4, 6, 8, 10};

// printing in short way using for loop
    for (int i = 0; i < 5; i++) {
    //     printf("%d\n", arr[i]);

// taking inpurt from user
    int a = i+1;
    printf("enter element %d: ", a);
    scanf("%d", &arr[i]);
    }
    printf("%d\n", arr[i]);

    // printf("%d", arr[2]);

    return 0;
}