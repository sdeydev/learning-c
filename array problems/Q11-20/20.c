// 20)

// Subtract two matrices and print the resultant matrix.

// Matrix dimensions should be validated first.

#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int r1,r2,c1,c2;
    int i,j;

    printf("Enter no of rows and columns for matrix 1: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter no of rows and columns for matrix 2: ");
    scanf("%d%d",&r2,&c2);

    if(r1!=r2||c1!=c2){
        printf("Matrix subtraction is not possible.\n");
        return 0;
    }

    printf("Enter Matrix 1 elements: \n");
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Matrix 2 elements: \n");
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r2;i++){ // since r2 = r1
        for(j=0;j<c2;j++){ // since c1 = c2
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("Resultant Matrix: \n");
    for(i=0;i<r2;i++){ // since resultant will have the same dimensions
        for(j=0;j<c2;j++){ // since resultant will have the same dimensions
            printf("%2d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}