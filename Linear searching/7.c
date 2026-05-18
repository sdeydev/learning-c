// 7) Search Smallest Element

// Take an array and find:

// smallest element
// its index

// (using traversal logic only)

#include<stdio.h>
int main(){

    int a[10];
    int i,n;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int min =a[0];
    int  ind = 0;
    for(i=1;i<n;i++){
        if(a[i]<min){
            min = a[i];
            ind = i;
        }
    }
    printf("smallest element is %d at index %d",min,ind);

    return 0;
}