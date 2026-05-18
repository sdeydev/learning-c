// 10)

// Check whether two matrices are equal or not.

// Both dimensions and elements must match.

#include<stdio.h>
int main(){

    int a[10][10],b[10][10];
    int r1,r2,c1,c2;
    int i,j;

    printf("Enter the row & column size of 1st matrix: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row & column size of 2nd matrix: ");
    scanf("%d%d",&r2,&c2);

    if(r1!=r2 || c1!=c2){
        printf("Matrices are not equal.\n");
        return 0;
    }

    printf("Enter Matrix 1 elements: \n");
    for(i= 0;i<r1;i++){
        for(j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter Matrix 2 elements: \n");
    for(i= 0;i<r2;i++){
        for(j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    int flag = 0;
    for(i= 0;i<r2;i++){ // since r1=r2
        for(j=0;j<c2;j++){ //since c1=c2
            if(a[i][j]!=b[i][j]){
                flag = 1;
                break;
            }
        }
    }
    if(flag==1){
        printf("Matrices are not equal.\n");
    }
    else{
        printf("Matrices are equal.\n");
    }

    printf("\n");

    return 0;
}