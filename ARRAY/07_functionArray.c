#include <stdio.h>
void fun(int a[]) { // function definition with array as parameter
}
int main () {
    int arr[5] = {1,2,3,4,5};
    printf("%d\n", arr[0]);
    fun(arr); // passing array to function
    printf ("%d\n", arr[0]);
    return 0;


}