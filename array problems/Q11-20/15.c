// 15)

// Take a matrix and print:

// upper triangular elements
// lower triangular elements

// separately.

// Input

//     1 2 3
//     4 5 6
//     7 8 9

// Output

// upper

//     1 2 3   
//     5 6
//     9

// lower

//     1
//     4 5
//     7 8 9


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
    // upper triangle
    printf("Upper triangle of the matrix is : \n");
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } 
    // lower triangle
    printf("Lower triangle of the matrix is : \n");
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}