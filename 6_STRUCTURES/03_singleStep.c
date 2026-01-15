#include <stdio.h>
#include <string.h>

// user defined
struct student {
    int roll; 
    float cgpa;
    char name[100];
};
int main () {
    struct student s1 = {1664, 7.9, "suman"};
    struct student s2 = {1552, 8.3, "rajat"};
    struct student s3 = {0};

    printf("student roll: %d\n", s2.roll);
    printf("student name: %s\n", s1.name);

    // pointer to structures
    struct student *ptr = &s1;
    printf("student roll: %d\n", (*ptr).roll); // roll of s1
    printf("student->roll: %d\n", ptr->roll); // ARROW OPERATOR

    printInfo(s1);

    return 0;
}

void printInfo (struct student s1) {
    printf("student information: \n");
    printf("student name: %s\n", s1.name);
    printf("student name: %d\n", s1.roll);
    printf("student name: %f\n", s1.cgpa);
}
    