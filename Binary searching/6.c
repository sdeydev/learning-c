// ## 6) Count Frequency of an Element

// Take a sorted array and a target element.
// Print how many times the target appears.

// ### Input

// Enter array size: 10
// Enter sorted array elements: 1 2 2 2 3 4 4 4 4 5
// Enter target element: 4

// ### Output

// Frequency of 4 is: 4

#include<stdio.h>
int binary_last(int a[], int n, int key){ // a[] -- arr passed from main

    int low = 0;
    int high = n-1;
    int mid;
    int ind=-1; // initializing as -1 so it could return -1 for not found

    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key){
            low = mid+1; // keep searching right after the value is found.
            ind = mid; // If found--ind=mid--stores the last index for the search -- last occurrence
        }
        else if(a[mid]>key){
            high = mid -1;
        }
        else{ // only possiblility -- a[mid]<key
            low = mid+1;
        }
    }
    return ind; // not found = -1 -- found = mid;
}

int binary_first(int a[], int n, int key){ // a[] -- arr passed from main

    int low = 0;
    int high = n-1;
    int mid;
    int ind = -1; // initializing as -1 so it could return -1 for not found

    while(low<=high){
        mid = (low+high)/2;
        if(a[mid]==key){
            high = mid-1; // keep searching left after the value is found.
            ind = mid; // If found--ind=mid--stores the last index for the search -- first occurrence
        }
        else if(a[mid]>key){
            high = mid -1;
        }
        else{ // only possiblility -- a[mid]<key
            low = mid+1;
        }
    }
    return ind; // not found = -1 -- found = mid;
}

int main(){
    int a[10]; // arr in main
    int n,key;
    int i;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    printf("Enter key: ");
    scanf("%d", &key);

    int first = binary_first(a,n,key);
    int last =  binary_last(a,n,key);

    int freq = (last-first)+1;

    if(first<0||last<0){
        printf("Element is not found!!.\n");
    }
    else{
        printf("Key %d has frequency : %d.\n",key,freq);
    }

    return 0;
}