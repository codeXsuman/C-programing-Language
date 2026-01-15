// Make a structure to store Bank Account information of a customer of ABC Bank. Also, make an alias for it.
#include <stdio.h>

typedef struct bankAccount {
    int accountNo;
    char name[100];
} acc;

int main () {
    acc acc1 = {123, "suman"};
    acc acc2 = {124, "rajat"};
    acc acc3 = {125, "sudhir"};

    printf("Account no = %d\n", acc1.accountNo);
    printf("Account holder name = %s\n\n", acc1.name);

    return 0;
}