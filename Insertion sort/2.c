// 2) Insertion Sort in Descending Order

// Take an array and sort it in descending order using Insertion Sort.

// Input
// Enter array size: 5
// Enter array elements: 5 2 4 1 3
// Output
// Sorted array: 5 4 3 2 1

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
    for(i=1;i<n;i++){
        key = a[i];
        j = i-1;
        while(j>=0 && a[j]<key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    printf("Sorted array(descending order): ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}