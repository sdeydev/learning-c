// 1. Basic Merge Sort

// Problem

// Sort the array in ascending order using Merge Sort.

// Input

// arr size = 5
// arr elements = 5 2 8 1 3

// Output

// 1 2 3 5 8

#include<stdio.h>
#include<stdlib.h> //  no need if no malloc()

void merge(int *arr, int start, int mid, int end){
    int size = end-start+1; // temp array size should be acc to merged arr size 
    int temp[size]; // creating temp array to store sorted marged elements and to copy-back to original array

    // using 2 pointers to traverse 2 sublist of the array
    int i = start; // for left sublist
    int j = mid+1; // for right sublist
    int k = 0; // this is for temp array indexing

    while(i<=mid && j<=end){ // loop for storing into the temp acc. to order
        if(arr[i]<=arr[j]){ // place smaller element into temp -- i++ -- k++
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{ // stop the i and start the j pointer -- store in temp -- increment j -- increment k -- until condition become false again
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    // now after this loop any one of the sublist should be fully traversed --  there might be some leftover element remaining in either sublist
    // any left over elements in either sublist is already sorted so we just need to place them in the temp array as it is

    // if any leftover in left side
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++;
    }

    // if any leftover in right side
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }

    // now the temp array is filled and temp elements r ready to be copy - backed in the original array
    // to copy - back to the original array
    for(int indx = 0; indx<size; indx++){ // traversing the temp array with a new index - indx --- from 0 to <size = end-start+1
        arr[indx+start]=temp[indx]; // to copy - back the elements correctly in their places --- [index+start]
    }
}

void mergesort(int *arr, int start, int end){
    
    if(start<end){ // recursion splitting will stop if (start == end) -- one element 
        
        int mid = start + (end - start)/2; // safe mid-point -- st+end / 2 also works

        mergesort(arr,start,mid); // to sort the left
        mergesort(arr,mid+1,end); // to sort the right

        merge(arr,start,mid,end); // to merge left and right back
    }
}

int main(){ // used DMA -- can be done normally too

    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }

    int *arr = malloc(n*sizeof(int));

    if(arr==NULL){
        printf("memory allocation failed\n");
        return 0;
    }

    printf("Enter array elements: ");
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    mergesort(arr,0,n-1);

    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);

    return 0;

}