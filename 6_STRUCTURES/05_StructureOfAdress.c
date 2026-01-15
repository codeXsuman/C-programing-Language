// Enter adress(House no, block, city, state) of 5 people.
#include <stdio.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdr(struct address adr);

int main () {
    struct address adr[5]; // for address of 5 people 
    // input
    for (int i=0; i<5; i++) {
        printf("----- Enter info for person %d -----\n", i+1);
        printf("Enter House no: ");
        scanf("%d", &adr[i].houseNo);
        printf("Enter block no: ");
        scanf("%d", &adr[i].block);
        printf("Enter City: ");
        scanf("%s", adr[i].city);
        printf("Enter State: ");
        scanf("%s", adr[i].state);
        printf("----------------\n");
    }

        printAdr(adr[0]); // adr of 1
        printAdr(adr[1]); // adr of 2
        printAdr(adr[2]); // adr of 3
        printAdr(adr[3]); // adr of 4
        printAdr(adr[4]); // adr of 5

    return 0;
}

void printAdr(struct address adr) {
    printf("Adress of person is: %d, %d, %s, %s\n", adr.houseNo, adr.block, adr.city, adr.state);
}