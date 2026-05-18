// 13)

// Perform left rotation of an array by one position.

// Example:

// 1 2 3 4 5

// Output:

// 2 3 4 5 1

#include<stdio.h>
int main(){
    int a[10];
    int i,n;

    printf("Enter the no of terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 

    printf("The array before the left rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    int last = a[0];
    for(i=0;i<n-1;i++){
        a[i]=a[i+1];
    }
    a[n-1]=last;

    printf("The array after the left rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}