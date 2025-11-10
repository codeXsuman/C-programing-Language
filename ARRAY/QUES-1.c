#include<stdio.h>
// given an array of marks of students, if the mark of any srudent is less than 35 print its roll number. [roll no is reffers to indrx of the array]
int main () {
    int marks[10] = {45, 67, 23, 89, 12, 90, 54, 31, 76, 88};

    for (int i = 0; i<10; i++) {
        if (marks[i] < 35) {
            printf("The roll number of student having marks less than 35 is: %d\n", i);
        }
    }
    return 0;
}