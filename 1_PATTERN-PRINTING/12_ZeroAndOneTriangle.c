// 1
// 01
// 101
// 0101
#include <stdio.h>
int main () {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    int a;
    //                      METHOD-1
    // for (int j=1; j <= rows; j++) {
    //     if (j%2 != 0) {a = 1;}
    //     else {a = 0;}
    //     for (int i = 1; i <=j ; i++) {
    //         printf("%d", a);
    //         if (a == 0) a =1;
    //         else a =0;
    //     }
    //     printf("\n");
    // }


    //                      METHOD-2
    for (int j=1; j <= rows; j++) {
        for (int i = 1; i <=j ; i++) {
            if ((i+j)%2 == 0) a =1;
            else a =0;
            printf("%d", a);
        }
        printf("\n");
    }
            
    return 0;
}