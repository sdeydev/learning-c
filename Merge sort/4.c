// 4. Merge Two Already Sorted Arrays

// Problem

// Given two sorted arrays, merge them into one sorted array.

// Input

// Array 1:
// 1 4 7 10

// Array 2:
// 2 3 6 9

// Output

// 1 2 3 4 6 7 9 10

#include<stdio.h>
#include<stdlib.h> 

void merge(int *arr1, int *arr2, int*final, int n1, int n2){
    int size = n1+n2;
    int temp[n1+n2];

    int i = 0;
    int j = 0;
    int k = 0;

    while(i<n1 && j<n2){
        if(arr1[i]<=arr2[j]){
            temp[k]=arr1[i];
            i++;
            k++;
        }else{
            temp[k]=arr2[j];
            j++;
            k++;
        }
    }

    while(i<n1){
        temp[k]=arr1[i];
        i++;
        k++;
    }

    while(j<n2){
        temp[k]=arr2[j];
        j++;
        k++;
    }

    for(int ind = 0;ind<size;ind++){
        final[ind] = temp[ind];
    }
}


int main(){
    int n1,n2;
    printf("Enter the size of 1st and 2nd array: ");
    scanf("%d%d",&n1,&n2);

    if(n1<=0||n2<=0){
        printf("Invalid input\n");
        return 1;
    }

    int *arr1 = malloc(n1*sizeof(int));
    int *arr2 = malloc(n2*sizeof(int));

    if(arr1==NULL||arr2==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    int *final = malloc((n1+n2)*sizeof(int));

    if(final==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter sorted 1st array elements: ");
    for(int i = 0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter sorted 2nd array elements: ");
    for(int i = 0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }

    merge(arr1,arr2,final,n1,n2);

    printf("Sorted merged array: ");
    for(int i=0;i<n1+n2;i++){
        printf("%d ",final[i]);
    }
    free(arr1);
    free(arr2);
    free(final);

    return 0;
}