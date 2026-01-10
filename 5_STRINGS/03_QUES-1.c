// #include<stdio.h>
// int main () {
//     char name[50];
//     printf("Enter your name: ");
//     gets(name);  // Note: gets() is unsafe and deprecated, used here for simplicity
//     printf("Your name is : %s\n", name);
//     return 0;
// }


// valid way
#include<stdio.h>
int main () {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    puts(name); // prints the string with a new line
    // printf("Your name is : %s\n", name);
    return 0;
}