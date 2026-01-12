#include <stdio.h>
int main () {
    char firstStr[100] = "hello ";
    char secStr[] = "world";

    strcat(firstStr, secStr); // Concatenate secStr to firstStr
    puts(firstStr);
    return 0;
}