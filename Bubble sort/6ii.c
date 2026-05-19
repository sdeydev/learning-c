//  6) Find Largest Element Using Bubble Sort Logic

// Take an array and perform only one Bubble Sort pass.
// Print the largest element after the pass.

// Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3

// Output

// Largest element is: 5

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
    
    for(i=0;i<n-1;i++){ // only doing one pass so no outer loop -- single bubble sort pass
            if(a[i]>a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i]= temp;
            }
    }
    printf("Largest element is: %d",a[n-1]);

    return 0;
}