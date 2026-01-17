// write a programme to write all the odd numbers from 1 to n in a file.
#include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("odd.txt", "w"); // opening "odd.txt" file
    //taking user input
    int n;
    printf("Enter n: ");
    scanf("%d", &n);


    for (int i=1; i<=n; i++) {
        if(i%2 != 0) {
            fprintf(fptr, "%d\t", i); // printing in file
        }
    }

    fclose(fptr);

}
