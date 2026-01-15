#include <stdio.h>
#include <string.h>

// user defined
struct student {
    int roll; 
    float cgpa;
    char name[100];
};
int main () {
    struct student s1;
    s1.roll = 353;
    s1.cgpa = 8.5;
    // s1.name = "suman";
    strcpy(s1.name, "suman");

    printf("Student name: %s\n", s1.name);
    printf("Student roll: %d\n", s1.roll);
    printf("Student cgpa: %0.2f\n", s1.cgpa);
printf("\n");
    struct student s2;
    s2.roll = 360;
    s2.cgpa = 7.7;
    strcpy(s2.name, "rajat");

    printf("Student name: %s\n", s2.name);
    printf("Student roll: %d\n", s2.roll);
    printf("Student cgpa: %0.2f\n", s2.cgpa);
printf("\n");
    struct student s3;
    s3.roll = 370;
    s3.cgpa = 9.2;
    strcpy(s3.name, "shradha");

    printf("Student name: %s\n", s3.name);
    printf("Student roll: %d\n", s3.roll);
    printf("Student cgpa: %0.2f\n", s3.cgpa);
    
    return  0;
}