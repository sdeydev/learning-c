// 3) Write a program that reads a 5x5 array of integers and then prints the row sum and the column sum:

// Enter row 1: 8 3 9 0 10
// Enter row 2: 3 5 17 1 1
// Enter row 3: 2 8 6 23 1
// Enter row 4: 15 7 3 2 9
// Enter row 5: 6 14 2 6 0

// Row total: 30 27 40 36 28
// Column total: 34 37 37 32 21

#include<stdio.h>

int main(){
    int a[5][5]={{8,3,9,0,10},{3,5,17,1,1},{2,8,6,23,1},{15,7,3,2,9},{6,14,2,6,0}};
    int i,j;

    // printing sum of rows
    printf("Row total: ");
    for(i=0;i<5;i++){ // keeping my row static
        int row_sum=0;
        for(j=0;j<5;j++){ // moving column index
            row_sum += a[i][j]; // accessing like - a[R][C] - a 0 0 + a 0 1 + a 0 2 ....
        }
        printf("%d ",row_sum);
    }
    printf("\n");

    // printing sum of columns
    printf("Column total: ");
    for(i=0;i<5;i++){ // keeping my row static
        int col_sum=0;
        for(j=0;j<5;j++){ // moving column index
            col_sum += a[j][i]; // accessing like - a[C][R] - a 0 0 + a 1 0 + a 2 0 ....
        }
        printf("%d ",col_sum);
    }
    printf("\n");
    
    return 0;
}