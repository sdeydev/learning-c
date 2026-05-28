// 2. Quick Sort with Negative Numbers

// Problem

// Sort the array containing negative integers.

// Input
// 7
// 5 -2 9 -7 3 0 1

// Output
// -7 -2 0 1 3 5 9


// same soln
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
    free(arr);

    return 0;
}
