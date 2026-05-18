// 1)

// Take n integers in an array and print:

// largest element
// smallest element

// without using extra arrays.

#include<stdio.h>
int main(){
    int a[100];
    int i,n;

    printf("Enter the no terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max = a[0];
    int min = a[0];
    for(i=0;i<n;i++){
        min = a[i]<min? a[i] : min;
        max = a[i]>max? a[i] : max;
    }
    printf("Largest element: %d\n",max);
    printf("Smallest element: %d\n",min);

    return 0;
}