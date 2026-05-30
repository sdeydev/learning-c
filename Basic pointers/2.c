// 2. Find Maximum Element Using Pointer Traversal

// Problem

// Find the largest element in an array using only pointer arithmetic.

// Input

// 6
// 3 9 2 11 5 7

// Output

// 11

// Hint

// Instead of:

// arr[i]

// use:

// *(arr + i)

// or move a pointer through the array.

// Test Cases

// Input:

// 5
// 1 2 3 4 5

// Output:

// 5

// Input:

// 4
// -5 -1 -10 -3

// Output:

// -1

#include<stdio.h>
#include<stdlib.h>

int *maxm(int *arr,int n){
    int *max = arr;
    for(int *i = arr+1; i<arr+n; i++){
        max = *i>=*max? i:max;
    }
    return max;
}

int main(){
    int n, *p;

    printf("Enter array size: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 1;
    }

    int *arr = malloc(n*sizeof *arr);

    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    
    printf("Enter array elements: ");
    for(p=arr;p<arr+n;p++){
        scanf("%d",p);
    }

    int *max  = maxm(arr,n);

    printf("Max element: %d\n",*max);
    free(arr);

    return 0;

}
