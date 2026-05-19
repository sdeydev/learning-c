//  10) Check Whether Array Is Already Sorted

// Take an array and check whether it is already sorted in ascending order using Bubble Sort traversal logic.

// Input

// Enter array size: 5
// Enter array elements: 1 2 3 4 5

// Output

// Array is already sorted.

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
    int sorted = 1;
    for(i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            sorted = 0;
            break;
        }
    }
    
    if(sorted == 1){
        printf("Array is already sorted.\n");
    }
    else{
        printf("Array is not sorted.\n");
    }

    return 0;
}