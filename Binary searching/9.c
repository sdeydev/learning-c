// ## 9) Check Whether Array Is Sorted Before Binary Search

// Take an array and a target element.
// First check whether array is sorted.
// If sorted, perform Binary Search.
// If not sort it, then perform Binary Search.

// ### Input

// Enter array size: 5
// Enter array elements: 1 3 5 7 9
// Enter target element: 5

// ### Output

// Array is sorted.
// Element found at index 2

#include<stdio.h>
int main(){
    int a[10];
    int i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    int shift_count = 0;
    for(i=1;i<n;i++){
        int temp = a[i];
        int j = i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            shift_count++;
            j--;
        }
        a[j+1]=temp;
    }
    if(shift_count==0){
        printf("Array is already sorted.\n");
    }
    else{
        printf("Array was not sorted. Sorted successfully.\n");
    }

    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    int low = 0;
    int high = n-1;
    int flag = 0;

    while(low<=high){
        int mid = (low+high)/2;
        if(a[mid]==key){
            printf("Key %d is found at index : %d",key,mid);
            flag = 1;
            break;
        }
        else if(key<a[mid]){
            high = mid -1;
        }
        else{// only possiblility -- a[mid]<key
            low = mid +1;
        }
    }
    if(flag==0){
        printf("Element not found!!.\n");
    }

    return 0;
}