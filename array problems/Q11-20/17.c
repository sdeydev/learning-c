// 17)

// Find the row having the maximum sum in a matrix.

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
    for(i=0;i<n;i++){
        int rowsum = 0;
        for(j=0;j<n;j++){
            rowsum += a[i][j];
        }
        b[i]=rowsum;
    }
    int max = b[0];
    int row =0;
    for(i=0;i<n;i++){
        if(b[i]>max){
            max = b[i];
            row = i;
        }
    }

    printf("The row that has the highest sum is row no.: %d\n",row+1); // to print normal acc to indexing not 0 indexing.

    printf("Row having maximum sum: ");

    for(j=0;j<n;j++){
    printf("%d ", a[row][j]);
    }

    printf("\n");

    printf("The maximum row sum is : %d\n",max);
    
    return 0;
}