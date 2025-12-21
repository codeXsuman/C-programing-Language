#include <stdio.h>
int main () {
    int a = 5;
    int *x = &a; // Pointer x holds the address of variable a
    printf("Value of a: %d\n", a); // value of a
    printf("Address of a: %p\n", &a); // address of a
    printf("Value of pointer x (address of a): %p\n", x);
    printf("Value pointed to by x: %d\n", *x); // Dereferencing the pointer to get the value of a
    return 0;
}