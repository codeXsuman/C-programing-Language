#include <stdio.h>
// void swap(int a, int b) {
void swap(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main () {
    int a,b;
    printf("Enter a & b: ");
    scanf("%d %d", &a, &b);
    // swap(a, b);
    swap(&a, &b);
    printf("After swapping:\na = %d\nb = %d\n", a, b);
    return 0;
}

// Note: The above code will not swap the values of a and b in main function
// because the swap function uses pass-by-value. To actually swap the values,
// you would need to use pointers or return the swapped values.