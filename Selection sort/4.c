// ## 4) Count Total Swaps in Selection Sort

// Take an array and sort it using Selection Sort.
// Print the total number of swaps performed.

// ### Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3

// ### Output

// Sorted array: 1 2 3 4 5
// Total swaps: 3

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

    int swap = 0;
    for(i=0;i<n-1;i++){
        int minindex = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
        
        if(minindex==i){
            continue;
        }
        else{
            swap++;
        }
    }

    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    printf("Total swaps: %d",swap);

    return 0;
}