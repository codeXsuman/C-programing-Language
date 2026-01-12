#include <stdio.h>

int main () {
    char str1[] = "HHHA";
    char str2[] = "HHHB";

    int result = strcmp(str1, str2);
    printf("Comparison result: %d\n", result);
    return 0;
}