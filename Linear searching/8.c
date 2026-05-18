// 8) Search Largest Element

// Take an array and find:

// largest element
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

    int max = a[0];
    int ind = 0;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max = a[i];
            ind = i;
        }
    }
    printf("Largest element is: %d at index %d",max,ind);

    return 0;
}