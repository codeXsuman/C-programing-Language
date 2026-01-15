#include <stdio.h>
#include <string.h>

typedef struct student {
    int roll;
    float cgpa;
    char name[100];
} stu; // we have created a typedef "stu" of "student"

typedef struct computerEngineeringStudent {
    int roll;
    float cgpa;
    char name[100];
} coe;

int main () {
    coe s1; // shortcut
    s1.roll = 360;
    s1.cgpa = 7.7;
    strcpy(s1.name, "rajat");

    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student cgpa: %0.2f\n", s1.cgpa);

    return 0;
}