//  5) Print Array After Every Pass

// Take an array and perform Bubble Sort.
// Print the array after each pass.

// Input

// Enter array size: 4
// Enter array elements: 5 2 4 1

// Output

// After pass 1: 2 4 1 5
// After pass 2: 2 1 4 5
// After pass 3: 1 2 4 5

#include<stdio.h>
int main(){
    int a[10];
    int n,i,j;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){ // passes
        
        int swapped = 0;
        for(j=0;j<n-i-1;j++){ // comparisons/swaps
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                swapped = 1;
            }
        }
        if(swapped==0){ // if already been sorted after any pass/no pass.
            printf("Array is sorted.\n");
            break;
        }
        printf("After pass %d: ",i+1);
        int k;
        for(k=0;k<n;k++){ // for printing after each pass
            printf("%d ",a[k]);
        }
        printf("\n");
    }

    return 0;
}