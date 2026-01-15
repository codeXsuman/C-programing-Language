// create a structure to store vectors. Then make a function to return sum of 2 vectors.
#include <stdio.h>
struct vector {
    int x;
    int y;
};
void calSum(struct vector v1, struct vector v2, struct vector sum) {
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is: %d\n", sum.x);
    printf("Sum of y is: %d\n", sum.y);

}
int main () {
    // struct vector v1;
    // v1.x = 5;
    // v1.y = 10;
    // struct vector v2;
    // v2.x = 3;
    // v2.y = 7;
    // we can write in a short way written below!
    struct vector v1 = {5, 10};
    struct vector v2 = {3, 7};
    struct vector sum = {0};

    calSum(v1, v2, sum);

    return 0;
}