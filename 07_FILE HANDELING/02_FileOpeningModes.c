/* ______file opening modes_______
"r" --> open to read.
"rb" --> open to read in binary.
"w" --> open to write.
"wb" --> open to write in binary.
"a" --> open to append.
*/
#include <stdio.h>

int main () {
    FILE *fptr; // 'FILE' pointer

    // oprning file
    // ptr = fopen("filename", mode); // mode means read or write.
    fptr = fopen("NewTest.txt", "r");
    if (fptr == NULL) {
        printf("file does not exist\n");
    } else {
        fclose(fptr);
    }

    return 0;
}