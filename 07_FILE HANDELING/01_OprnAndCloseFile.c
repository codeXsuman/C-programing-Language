#include <stdio.h>

int main () {
    FILE *ptr; // 'FILE' pointer

    // oprning file
    // ptr = fopen("filename", mode); // mode means read or write.
    ptr = fopen("test.txt", "r");

    // closing a file
    fclose(ptr);

    return 0;
}