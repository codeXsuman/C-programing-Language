#include <stdio.h>
#include <string.h>

// user defined
struct student {
    int roll; 
    float cgpa;
    char name[100];
};
int main () {
    struct student ece[100];
    ece[0].roll = 1664;
    ece[0].cgpa = 6.7;
    strcpy(ece[0].name, "ankit");

    printf("name = %s\n", ece[0].name);
    return 0;
}