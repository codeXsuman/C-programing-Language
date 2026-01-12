// write a function to count the occurence of vowels in a string.
#include <stdio.h>
int countVowles(char str[]) {
    int count = 0;
    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ) {
            count++;
        }
    }
    return count;
}

int main () {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", &str);

    printf("Total Vowels are: %d\n", countVowles(str));
    return 0;
}