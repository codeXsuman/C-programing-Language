#include <stdio.h>

void england () {
    printf("You are in england.\n"); //Line 6
    return; //Line 7
}
void australia() {
    printf("You are in australia.\n"); //Line 4
    england(); // calling england //Line 5
    return; //Line 8
}
void india () {
    printf("You are in india.\n"); //Line 2
    australia(); // calling australia //Line 3
    return; //Line 9
}

int main () {
    india(); // calling india  //printing Line 1
    return 0; //Line 10 [end]
}
