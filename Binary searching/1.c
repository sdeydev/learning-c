// ## 1) Basic Binary Search

// Take a sorted array and a target element.
// Print the index if found, otherwise print "Element not found".

// ### Input

// nter array size: 7
// Enter sorted array elements: 1 3 5 7 9 11 13
// Enter target element: 7

// ### Output

// element found at index 3

#include<stdio.h>
int main(){
    int a[10];
    int i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

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