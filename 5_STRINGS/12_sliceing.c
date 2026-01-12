// write a function named slice. which take a string and returns a sliced string from index n to m.
#include <stdio.h>
void slice (char str[], int n, int m) {
    char newStr[100];
    int j=0;
    for (int i=n; i<=m; i++, j++) {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}

int main () {
    char str[100];
    int n;
    int m;
    printf("Enter a string: ");
    scanf("%s", &str);
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    slice(str, n, m);
    return 0;
}