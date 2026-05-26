// 5. Count Inversions using Merge Sort

// Problem

// Count how many inversions exist in the array.

// (Inversion means: `a[i] > a[j]` and `i < j`)

// Input

// arr size = 5
// arr elements = 2 4 1 3 5

// Output

// 3

// Explanation

// Inversions:

// (2,1)
// (4,1)
// (4,3)


// 5. Count Inversions using Merge Sort

#include<stdio.h>
#include<stdlib.h>

int merge(int *arr, int start, int mid, int end){

    int size = end - start + 1;
    int temp[size];

    int i = start;
    int j = mid + 1;
    int k = 0;

    int count = 0;

    while(i <= mid && j <= end){

        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++;
            k++;
        }
        else{
            // arr[i] > arr[j]
            // all remaining left elements also form inversions

            count += (mid - i + 1);

            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    // leftover left elements
    while(i <= mid){
        temp[k] = arr[i];
        i++;
        k++;
    }

    // leftover right elements
    while(j <= end){
        temp[k] = arr[j];
        j++;
        k++;
    }

    // copy back
    for(int ind = 0; ind < size; ind++){
        arr[ind + start] = temp[ind];
    }

    return count;
}

int mergesort(int *arr, int start, int end){

    int count = 0;

    if(start < end){

        int mid = start + (end - start)/2;

        // left inversions
        count += mergesort(arr, start, mid);

        // right inversions
        count += mergesort(arr, mid + 1, end);

        // cross inversions during merge
        count += merge(arr, start, mid, end);
    }

    return count;
}

int main(){

    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Invalid input\n");
        return 1;
    }

    int *arr = malloc(n * sizeof(int));

    if(arr == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int inversions = mergesort(arr, 0, n - 1);

    printf("Sorted array: ");

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nInversion count: %d\n", inversions);

    free(arr);

    return 0;
}