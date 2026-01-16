// EOF(End of File) 
// fgetc returns EOF to show that the file has ended.
#include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("test3.txt", "r");
    char ch;
    ch = fgetc(fptr); // reading character and storing in "ch"
    while(ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;
}