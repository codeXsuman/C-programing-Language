// ================= VIDEO STAMP: 2:32:00 =================
#include<stdio.h>
int maze(int cr, int cc, int er, int ec){ // current row, current column, end row, end column
    int rightWays = 0, downWays = 0;
    if(cr==er && cc==ec){return 1;}
    if (cr==er){rightWays += maze(cr, cc+1, er, ec);}
    if(cc==ec){downWays += maze(cr+1, cc, er, ec);}
    if(cr<er && cc<ec){
        rightWays += maze(cr, cc+1, er, ec);
        downWays += maze(cr+1, cc, er, ec);
    }
    // recursive case
    int totalWays = downWays + rightWays; // 2:45:00
    return totalWays;

}
int main () {
    int rows, cols;
    printf("Enter no of rows: ");
    scanf("%d", &rows);
    printf("Enter no of columns: ");
    scanf("%d", &cols);
    int NoOfWays = maze(1, 1, rows, cols);
    printf("No of ways to reach from (1,1) to (%d,%d) is %d\n", rows, cols, NoOfWays);
    return 0;
}