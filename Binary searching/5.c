// ## 5) Find Last Occurrence Using Binary Search

// Take a sorted array with duplicate elements.
// Find the LAST occurrence of target.

// ### Input

// nter array size: 8
// Enter sorted array elements: 1 2 2 2 3 4 5 5
// Enter target element: 2

// ### Output

// Last occurrence at index 3

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
    int ind; 

    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key){
            low = mid+1; // keep searching right after the value is found.
            flag = 1;
            ind = mid; // stores the last index for the search -- last occurrence
        }
        else if(a[mid]>key){
            high = mid -1;
        }
        else{ // only possiblility -- a[mid]<key
            low = mid+1;
        }
    }
    if(flag){
        printf("Last occurrence at index : %d.\n",ind);
    }
    else{
        printf("Element not found.\n");
    }

    return 0;
}