// 12)

// Take an array and move all zeros to the end while maintaining order of non-zero elements.

// Example:

// 1 0 4 0 2 5 0

// Output:

// 1 4 2 5 0 0 0

#include<stdio.h>
int main(){
    int n,i;
    int a[100];

   printf("Enter the no of terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 

    printf("The array before moving 0s: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    int count = 0;
    for(i=0;i<n;i++){ // traversing the array
        if(a[i]==0){ // zero values are ignored
            continue;
        }
        else{ // for non zeros
            a[count]=a[i]; // filling a new compact indexing with ordered non zeros
            count++; // increasing the index and filling it with next non zero
        }
    }
    for(i=count;i<n;i++){ // all non zeros have come at front so filling the rest with 0
        a[i]=0;
    }

    printf("The array after moving 0s: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}