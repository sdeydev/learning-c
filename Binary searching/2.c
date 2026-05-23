// ## 2) Binary Search — Element Not Found

// Take a sorted array and a target element.
// Check whether the element exists.

// ### Input

// Enter array size: 6
// Enter sorted array elements: 2 4 6 8 10 12
// Enter target element: 5


// ### Output

// element not found.

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
    int mid;
    int flag =0; 

    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key){
            printf("Element %d found at index: %d",key,mid);
            flag = 1;
            break;
        }
        else if(a[mid]>key){
            high = mid -1;
        }
        else{ // only possiblility -- a[mid]<key
            low = mid+1;
        }
    }
    if(flag == 0){
        printf("Element not found.\n");
    }


    return 0;
}