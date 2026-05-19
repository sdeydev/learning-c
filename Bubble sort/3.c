//  3) Optimized Bubble Sort

// Take an array and sort it using Bubble Sort.
// Stop early if the array becomes sorted before all passes finish.

// Input

// Enter array size: 5
// Enter array elements: 1 2 3 4 5

// Output

// Array already sorted.
// Sorted array: 1 2 3 4 5


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
    for(i=0;i<n-1;i++){
        int swapped = 0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
                swapped = 1;
            }
        }
        if(swapped==0){
            printf("Array already sorted.\n");
            break;
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;

}