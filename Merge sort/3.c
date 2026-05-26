// 3. Merge Sort in Descending Order

// Problem

// Modify merge sort to sort in descending order.

// Input

// arr size = 7
// arr elements = 4 1 9 2 7 3 6

// Output

// 9 7 6 4 3 2 1

#include<stdio.h>
#include<stdlib.h>

void merge(int *arr, int start, int mid, int end){
    int size = end-start+1;
    int temp[size];

    int i = start;
    int j = mid+1;
    int k = 0;

    while(i<=mid && j<=end){
        if(arr[i]>=arr[j]){ // just this condition changed from prev
            temp[k]=arr[i];
            i++;
            k++;
        }else{
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
    for(int ind = 0; ind<size;ind++){
        arr[ind+start]=temp[ind];
    }
}

void mergesort(int *arr, int start, int end){
    if(start<end){
        int mid = start+(end-start)/2;

        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);

        merge(arr,start,mid,end);
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input\n");
        return 1;
    }

    int *arr=malloc(n*sizeof(int));

    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements: ");
    for(int i=0;i<n;i++){
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
