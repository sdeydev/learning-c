// ## 10) Binary Search on Descending Sorted Array

// Take a descending sorted array and perform Binary Search.

// ### Input

// Enter array size: 7
// Enter sorted array elements: 13 11 9 7 5 3 1
// Enter target element: 7

// ### Output

// Element found at index 3

#include<stdio.h>
int main(){
    int a[10];
    int i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter descending sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    int high = n-1;
    int low = 0;
    int mid;

    int found = 0;
    while(low<=high){
        mid = (high+low)/2;
        if(a[mid]==key){
            found = 1;
            printf("Key %d is found at index %d.\n",key,mid);
            break;
        }
        else if(a[mid]>key){
            low = mid+1; // In descending order -- lower values will be on right side
        }
        else{ // only possible case -- a[mid]<key
            high = mid-1; // In descending order -- higher values will be on left side
        }
    }
    if(found == 0){
        printf("Key %d is not found.\n");
    }

    return 0;
}