// 9)

// Take a square matrix and print:

// principal diagonal sum
// secondary diagonal sum

// Example:

// 1 2 3
// 4 5 6
// 7 8 9

// Principal diagonal:

// 1 + 5 + 9

// Secondary diagonal:

// 3 + 5 + 7

#include<stdio.h>
int main(){
    int a[10][10],n;
    int i,j;
    int pds=0,sds=0;

    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    printf("Enter array elements: \n");
    for(i= 0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++){
            pds += a[i][i];
            sds += a[i][n-i-1];
        }
    
    printf("Principal Diagonal sum is: %d\n",pds);
    printf("Secondary Diagonal sum is: %d\n",sds);

    return 0;
}