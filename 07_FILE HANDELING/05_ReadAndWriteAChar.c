#include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test2.txt", "w");
    // another method to print "Apple"
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));
    // printf("%c\n", fgetc(fptr));

    // another method to overwrite "Mango"
    // fputc('M', fptr);
    // fputc('A', fptr);
    // fputc('N', fptr);
    // fputc('G', fptr);
    // fputc('O', fptr);

    return 0;
}