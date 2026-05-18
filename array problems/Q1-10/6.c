// 6)

// Take two arrays of same size and create a third array where:

// c[i] = a[i] + b[i]

// Then print the third array.
#include<stdio.h>
int main(){
    int a[10],b[10];
    int n,i;

    printf("Enter the no terms for both arrays: ");
    scanf("%d",&n);
    printf("Enter 1st array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter 2nd array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&b[i]);
    }

    int c[10];
    printf("Printing the 3rd array: ");
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}