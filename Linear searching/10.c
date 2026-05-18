// 10) Search in Matrix

// Take a matrix and a target element.

// Check whether target exists in matrix or not.

// If found, print:

// row index
// column index

// Otherwise print:

// Element not found

#include <stdio.h>

int main()
{

    int a[10][10];
    int r, c;
    int i, j;
    int target;

    printf("Enter row and column size of matrix: ");
    scanf("%d%d",&r,&c);

    printf("Enter matrix elements: \n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter target: ");
    scanf("%d",&target);

    int flag = 0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(a[i][j]==target){
                flag = 1;
                printf("Target's --\nRow index is : %d\nColumn index is : %d.\n",i,j);
                break;
            }
        }
        if(flag==1){
            break;
        }
    }

    if(flag==0){
        printf("Element not found.\n");
    }

    return 0;
}