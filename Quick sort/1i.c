// 1.i Basic Quick Sort

// Problem

// Sort the array in ascending order using Quick Sort.

// Input
// 6
// 8 3 1 7 0 10

// Output
// 0 1 3 7 8 10

#include<stdio.h>
#include<stdlib.h>

int partition(int *arr, int start, int end){ // fn for partition and returning pivot index
    int ind = start-1; // first iterator -- creates spaces for placing elements
    int pivot = arr[end]; // taking last elem as pivot

    for(int j=start;j<end;j++){ // 2nd iterator to check elems smaller than pivot
        
        if(arr[j]<=pivot){
            ind++; // created space
            int temp = arr[j];
            arr[j]=arr[ind];
            arr[ind]=temp; // swap the element with the element in the space created
        }
    }
    ind++; // again create space for placing of pivot 
    int temp = arr[ind];
    arr[ind]=arr[end];
    arr[end] = temp; // place pivot to that space - swap

    return ind; // this ind is now pivot index
}

void quicksort(int *arr, int start, int end){
    if(start<end){
        int pivind = partition(arr,start,end); 

        quicksort(arr, start, pivind-1); // for left half
        quicksort(arr, pivind+1, end); // for right half
    }
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

    if(arr==NULL){
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
    free(arr);

    return 0;
}