// 4. Find Median After Quick Sort

// Problem

// Sort the array using Quick Sort and print the median.

// If n is odd:

// median = middle element

// If n is even:

// median = average of two middle elements

// Input
// 5
// 9 2 7 1 6

// Output
// 6

// Test Case 2

// Input

// 6
// 1 2 3 4 5 6

// Output

// 3.5

#include<stdio.h>
#include<stdlib.h>

int partition(int *arr, int start, int end){
    int ind=start-1;
    int pivot = arr[end];

    for(int j= start;j<end;j++){
        if(arr[j]<=pivot){
            ind++;
            int temp = arr[j];
            arr[j]=arr[ind];
            arr[ind]=temp;
        }
    }
    ind++;
    int temp = arr[ind];
    arr[ind]=arr[end];
    arr[end]=temp;

    return ind;
}

void quicksort(int *arr, int start, int end){
    if(start<end){
        int PI = partition(arr,start,end);

        quicksort(arr,start, PI-1);
        quicksort(arr,PI+1,end);

    }
}
float median(int *arr, int n){
    if(n%2==0){
        return (arr[n/2-1]+arr[n/2])/2.0; 
    }
    return arr[n/2];
}

int main(){
    int n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid Input\n");
        return 1;
    }

    int *arr = malloc(n*sizeof(int));

    if(arr== NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    quicksort(arr,0,n-1);

    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nMedian is : %.1f",median(arr,n));

    free(arr);

    return 0;
}

