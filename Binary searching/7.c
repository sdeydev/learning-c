// ## 7) Find Smallest Element Greater Than Target

// Take a sorted array and a target element.
// Find the smallest element strictly greater than the target.

// ### Input

// Enter array size: 6
// Enter sorted array elements: 2 4 6 8 10 12
// Enter target element: 7

// ### Output

// Smallest greater element is: 8


#include<stdio.h>
int smallest_greater(int a[], int n, int key){

    int low = 0;
    int high = n-1;
    int mid; 

    int candidate_index = -1; // can return -1 when no suitable value is found;
    while(low<=high){
        mid = (low+high)/2;

        if(a[mid]>key){ // candidates can be found in this region.
            high = mid - 1; // shifting searching region to the left to find smaller valid candidate
            candidate_index = mid; // only storing if a[mid]>key
        }
        else{ // only possiblility -- a[mid]<=key // discarding the entire region
            low = mid+1; // not storing value here bcz, in this range values can't be candidates for requirement
        }
    }

    return candidate_index;
}

int main(){
    int a[10];
    int i,n;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter ascending sorted array: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int key;
    printf("Enter key: ");
    scanf("%d", &key);

    int candidate = smallest_greater(a,n,key);

    if(candidate<0){
        printf("Greater element than key %d is not found.\n",key);
    }
    else{
        printf("Smallest greater element than key %d is: %d",key,a[candidate]);
    }


    return 0;
}