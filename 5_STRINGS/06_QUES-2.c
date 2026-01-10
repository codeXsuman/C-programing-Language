// make a programe that inputs user's name & print the length.
#include <stdio.h>
#include <string.h>
int stringLength (char arr[]){
    int count = 0;
    for(int i=0; arr[i] != '\0'; i++) {
        count++;
    }
    return count;

}
void printString(char arr[]) {
    for (int i=0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main () {
    char name[] = "Suman nandi";
    int length = strlen(name);
    // printf("Enter your name: ");
    // fgets(name, sizeof(name), stdin);
    printf("Length of your name is: %d\n", length); // subtracting 1 to not count the newline character
    return 0;
}