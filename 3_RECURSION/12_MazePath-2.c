// ================= VIDEO STAMP: 3:04:00 =================
#include<stdio.h>
int maze2(int n, int m){
    int rightWays = 0, downWays = 0;
    if(n==1 && m==1) return 1;
    if(n==1){
        rightWays += maze2(n, m-1);
    }
    if (m==1) {
        downWays += maze2(n-1, m);
    }
    if(n>1 && m>1) {
        rightWays += maze2(n, m-1);
        downWays += maze2(n-1, m);
    }
    int totalWays = downWays + rightWays; // 2:45:00
    return totalWays;

}
int main () {
    int rows, cols;
    printf("Enter no of rows: ");
    scanf("%d", &rows);
    printf("Enter no of columns: ");
    scanf("%d", &cols);
    int NoOfWays = maze2(rows, cols);
    printf("No of ways to reach from (1,1) to (%d,%d) is %d\n", rows, cols, NoOfWays);
    return 0;
}