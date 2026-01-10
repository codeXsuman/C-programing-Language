// create a string firstname & lastname to store details of user & print all the characters using a loop.

// #include <stdio.h>
// void printString(char arr[]);
// int main () {
//     char firstname[20];
//     char lastname[20];
//     printf("Enter your first name: ");
//     scanf("%s", firstname);
//     printf("Enter your last name: ");
//     scanf("%s", lastname);
//     printString(firstname);
//     printString(lastname);
//     return 0;
// }
// void printString(char arr[]) {
//     for (int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }

// easy way
#include <stdio.h>
int main () {
    char firstname[20];
    char lastname[20];
    printf("Enter your first name: ");
    scanf("%s", firstname);
    printf("Enter your last name: ");
    scanf("%s", lastname);

    printf("%s\n", firstname);
    printf("%s\n", lastname);
    return 0;

}