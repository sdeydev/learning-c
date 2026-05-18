// 16)

// Check whether a square matrix is symmetric or not.

// A matrix is symmetric if:

// a[i][j]=a[j][i]

#include<stdio.h>
int main(){
    int n,i,j;
    int a[10][10];

    printf("Enter the size of square matrix: ");
    scanf("%d",&n);
    printf("Enter Matrix elements: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }

    int flag = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){ // checking only the upper part- reduce unnecessary traversal
            if(a[i][j]!=a[j][i]){
                flag = 1;
                break;
            }
        }
        if(flag==1){ // breaking the loop to stop unnecessary checks
            break;
        }
    }
    if(flag==0){
        printf("Matrix is Symmetric.\n");
    }
    else{
        printf("Matrix is not Symmetric.\n");
    }

    return 0;
}