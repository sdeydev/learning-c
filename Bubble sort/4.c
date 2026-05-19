//  4) Count Total Swaps

// Take an array and sort it using Bubble Sort.
// Print the total number of swaps performed.

// Input

// Enter array size: 5
// Enter array elements: 5 4 3 2 1

// Output

// Sorted array: 1 2 3 4 5
// Total swaps: 10

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
    int count = 0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                count++;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\nTotal swaps: %d\n",count);
    
    return 0;
}