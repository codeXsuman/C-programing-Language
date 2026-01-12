// Find the salted form of a password entered by the user if the salt is "123" & added at the end.
#include <stdio.h>

void salting(char password[]) {
    char salt[] = "123";
    char newPass[200];
    strcpy(newPass, password); // newPass = "cool"
    strcat(newPass, salt); // newPass = "cool" + "123"
    puts(newPass); // printing new password
}

int main () {
    char password[100];
    printf("Enter your password: "); // cool
    scanf("%s", password);
    salting(password);
    return 0;
}