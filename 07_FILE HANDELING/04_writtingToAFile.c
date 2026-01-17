#include <stdio.h>

int main () {
    FILE *fptr; // 'FILE' pointer

    // oprning file
    // ptr = fopen("filename", mode); // mode means read or write.
    fptr = fopen("test2.txt", "w"); 
    // writting on file
    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'a');
    fprintf(fptr, "%c", 'n');
    fprintf(fptr, "%c", 'g');
    fprintf(fptr, "%c", 'o');
    fclose(fptr);
    return 0;
}