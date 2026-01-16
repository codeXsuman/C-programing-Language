#include <stdio.h>

int main () {
    FILE *fptr; // 'FILE' pointer

    // oprning file
    // ptr = fopen("filename", mode); // mode means read or write.
    fptr = fopen("test.txt", "r");
    
    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch); // A
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch); // p
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch); // p
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch); // l
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch); // e

    fclose(fptr);

    return 0;
}