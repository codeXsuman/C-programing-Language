// Make a programme to input student information from a user & enter it to a file.
#include <stdio.h>

int main () {
    FILE *fptr;
    fptr = fopen("Student.txt", "w");
    char name[100];
    int age;
    float cgpa;
    printf("Enter name: ");
    scanf("%s", &name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);

    fprintf(fptr, "Name is : %s\n", name);
    fprintf(fptr, "Age is : %d\n", age);
    fprintf(fptr, "CGPA is : %.2f\n", cgpa);

    fclose(fptr);

    return 0;
}