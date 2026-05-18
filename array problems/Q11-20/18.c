// 18)

// Find the column having the minimum sum in a matrix.

// Also print the sum.

#include<stdio.h>
int main(){
    int n,i,j;
    int a[10][10],b[10];

    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    printf("Enter Matrix elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int rowsum=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            rowsum += a[i][j];
        }
        b[i]=rowsum;
    }
    int min = b[0];
    int row = 0;
    for(i=0;i<n;i++){
        if(b[i]<min){
            min = b[i];
            row = i;
        }
    }

    printf("Row with lowest sum is row no.: %d\n",row+1);
    printf("The row is: ");
    for(j=0;j<n;j++){
        printf("%d ",a[row][j]);
    }
    printf("\n");

    printf("The lowest sum is : %d\n",min);

    return 0;
}