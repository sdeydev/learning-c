// 5. Count Total Recursive Calls in Quick Sort

// Problem

// Implement Quick Sort and count how many recursive calls happen.

// Input
// 5
// 5 1 4 2 3

// Possible Output

// Sorted Array:
// 1 2 3 4 5

// Recursive Calls: -- count the initial call in main too
// 9


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

int quicksort(int *arr, int start, int end){
    int count = 0;
    if(start<end){
        int PI = partition(arr,start,end);

        count += 1 + quicksort(arr,start, PI-1); // 1+ bcz this itself is a  recursion call

        count += 1 + quicksort(arr,PI+1,end); // 1+ bcz this itself is a  recursion call

    }
    return count;
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

    int Recursion_calls = 1 + quicksort(arr,0,n-1); // 1+ -- counting this call from main

    printf("Sorted array: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    printf("\nRecursive calls : %d\n",Recursion_calls);
    free(arr);

    return 0;
}
