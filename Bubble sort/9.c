//  9) Sort and Print Unique Elements

// Take an array and sort it using Bubble Sort.
// Then print only unique elements.

// Input

// Enter array size: 7
// Enter array elements: 4 2 2 1 3 3 5

// Output

// Sorted array: 1 2 2 3 3 4 5
// Unique elements: 1 2 3 4 5

#include<stdio.h>
int main(){

    int a[10];
    int n;
    int i,j;

    printf("Enter size of array: ");
    scanf("%d",&n);
    
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    printf("Unique elements:");
    for(i=0;i<n-1;i++){
       if(a[i+1]!=a[i]){
            printf("%d ",a[i]);
       }
    }
    printf("%d",a[n-1]); // bcz last index wasnt printed so printing separately
    printf("\n");


    return 0;
}