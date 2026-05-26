// 2. Merge Sort with Negative Numbers

// Problem

// Sort the array containing negative integers.

// Input

// arr size = 6
// arr elements = -3 10 0 -1 8 -5

// Output

// -5 -3 -1 0 8 10


// same as prev nothing changed

#include<stdio.h>
#include<stdlib.h>

void merge(int *arr, int start, int mid, int end){
    int size = end - start + 1;
    int temp[size];

    int i = start;
    int j = mid+1;
    int k = 0;

    while(i<=mid && j<= end){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=mid){
        temp[k]=arr[i];
        i++;
        k++; 
    }
    while(j<=end){
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int ind = 0; ind<size; ind++){
        arr[ind+start]=temp[ind];
    }

}

void mergesort(int *arr, int start, int end){

    if(start<end){

        int mid = start + (end-start)/2;

        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}

int main(){
    
    int n;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }

    int *arr = (int*)malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    mergesort(arr,0,n-1);

    printf("Sorted array: ");
    for(int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);

    return 0;

}