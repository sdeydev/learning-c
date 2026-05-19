//  2) Bubble Sort in Descending Order

// Take an array and sort it in descending order using Bubble Sort.

// Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3

// Output

// Sorted array: 5 4 3 2 1

#include<stdio.h>
int main(){
    int a[10];
    int n,i,j;

    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j]= a[j+1];
                a[j+1]= temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}