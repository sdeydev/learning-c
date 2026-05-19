//  1) Basic Bubble Sort (Ascending Order)

// Take an array and sort it in ascending order using Bubble Sort.

// Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3

// Output

// Sorted array: 1 2 3 4 5

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

    //main logic of bubble sort
    for(i=0;i<n-1;i++){ // for passing index -- after each passing maximum element is fixed on the rightmost. so <n-1
        for(j=0;j<n-i-1;j++){ // when i = 0 , swap bw j=0;j=1 when i=1, swap bw j=1 and j= 2 .... so for n=5,i=4, j=3 (a[j]) swap j=4 (a[j+1])... maximum allowed j value is 3 .. so <n-i-1
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}