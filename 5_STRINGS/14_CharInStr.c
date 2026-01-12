// cheeck if a given cheracter in string is present or not.
#include <stdio.h>
void cheeckChar(char str[], char ch) {
    for(int i =0; str[i] != '\0'; i++) {
        if (str[i] == ch){
            printf("Given character is present in your string.");
            return;
        }
    }
    printf("Given character is not present!");
}

int main () {
    char str[] = "sumannandi";
    char ch = 'b';
    // printf("Enter text: ");
    // scanf("%s", &str);
    // printf("Enter character: ");
    // scanf("%c", &ch);

    cheeckChar(str, ch);
}