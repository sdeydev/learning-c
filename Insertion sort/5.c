// 5) Find kth Smallest Element Using Insertion Sort

// Take an array and a value k.
// Sort the array using Insertion Sort and print the kth smallest element.

// Input
// Enter array size: 6
// Enter array elements: 7 2 5 1 9 3
// Enter k: 3
// Output
// 3rd smallest element is: 3

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

    int k;
    printf("Enter k for kth smallest element: ");
    scanf("%d",&k);

    for(i=1;i<n;i++){
        key = a[i];
        j = i - 1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    printf("%d (st/nd/rd/th) smallest element is: %d",k,a[k-1]);

    return 0;
}