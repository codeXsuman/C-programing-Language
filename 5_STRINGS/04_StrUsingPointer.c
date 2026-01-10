#include <stdio.h>
int main () {
    char *canChange = "SUMAN";
    puts(canChange);
    canChange = "CHANDRASEKHAR";
    puts(canChange);
    return 0;
}

// but
#include<stdio.h>
int main () {
    char canNotChange[] = "SUMAN";
    puts(canNotChange);
    // canNotChange = "CHANDRASEKHAR"; // This will give error
    return 0;
}