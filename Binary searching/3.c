// ## 3) Count Total Iterations in Binary Search

// Take a sorted array and a target element.
// Print how many iterations Binary Search required.

// ### Input

// nter array size: 7
// Enter sorted array elements: 1 3 5 7 9 11 13
// Enter target element: 13

// ### Output

// element found at index 6
// Total iterations: 3

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
    int count=0;

    while(low<=high){
        count++;
        mid = (low+high)/2;
        if(a[mid]==key){
            printf("Element %d found at index: %d.\n",key,mid);
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
    printf("Total iterations: %d",count);

    return 0;
}