// 4) Count Total Shifts in Insertion Sort

// Take an array and sort it using Insertion Sort.
// Print the total number of shifts performed.

// Input
// Enter array size: 5
// Enter array elements: 5 4 3 2 1
// Output
// Sorted array: 1 2 3 4 5
// Total shifts: 10

#include<stdio.h>
int main(){
    int i,j,n;
    int a[10];
    int key;
    
    printf("Enter size of array : ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int shift = 0;
    for(i=1;i<n;i++){
        key = a[i];
        j = i - 1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            shift++;
            j--;
        }
        a[j+1]=key;
    }
    
    printf("Sorted array: ");
        for(i=0;i<n;i++){
            printf("%d ",a[i]);
        }
    printf("\n");
    printf("Total shifts: %d",shift);
    
    return 0;
}