// 5. Pointer-Based Array Statistics

// Problem

// Using pointers only, find:

// * sum
// * average
// * minimum
// * maximum

// of an array.

// Input

// 5
// 2 4 6 8 10

// Output

// Sum = 30
// Average = 6.00
// Min = 2
// Max = 10

// Test Case

// Input:

// 4
// 7 3 9 1

// Output:

// Sum = 20
// Average = 5.00
// Min = 1
// Max = 9

#include<stdio.h>
#include<stdlib.h>

int sum(int *arr, int n){
    int *ptr = arr;
    int sum = 0;
    for(ptr = arr;ptr< arr+n;ptr++){
        sum += *ptr;
    }
    return sum;
}

float avg(int *arr, int n){
    return (float)sum(arr,n)/n;
}

int *min(int *arr, int n){
    int *minm = arr;
    for(int *i = arr+1;i<arr+n;i++){
        if(*i<*minm){
            minm = i;
        }
    }
    return minm;
}

int *max(int *arr, int n){
    int *maxm = arr;
    for(int *i=arr+1;i<arr+n;i++){
        if(*i>*maxm){
            maxm = i;
        }
    }
    return maxm;
}

int main(){
    int n;

    printf("Enter the size of the array: ");
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
    for(int *ptr =arr;ptr<arr+n;ptr++){
        scanf("%d",ptr);
    }

    int *minm = min(arr,n);
    int *maxm = max(arr,n);

    printf("Sum is : %d\n",sum(arr,n));
    printf("Average is : %.2f\n",avg(arr,n));
    printf("Minimum is : %d\n",*minm);
    printf("Maximum is : %d\n",*maxm);

    free(arr);

    return 0;
}

