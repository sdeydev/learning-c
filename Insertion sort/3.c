// 3) Print Array After Every Pass

// Take an array and sort it using Insertion Sort.
// Print the array after every pass.

// Input
// Enter array size: 5
// Enter array elements: 5 2 4 1 3
// Output
// After pass 1: 2 5 4 1 3
// After pass 2: 2 4 5 1 3
// After pass 3: 1 2 4 5 3
// After pass 4: 1 2 3 4 5

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
        printf("After pass %d: ",i);

        key = a[i];
        j = i - 1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1] = key;
        for(int k=0;k<n;k++){
            printf("%d ",a[k]);
        }
        printf("\n");

    }   
    return 0;
}