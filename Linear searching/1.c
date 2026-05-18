// 1) Basic Existence Check

// Take an array and a target element from user.

// Check whether the target exists in the array or not.

// Print:

// Element Found

// or

// Element Not Found

#include<stdio.h>
int main(){

    int a[10];
    int i,n,target;

    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter target element: ");
    scanf("%d",&target);

    int flag = 0;
    for(i=0;i<n;i++){
        if(a[i]==target){
            flag = 1;
            break;
        }
    }

    if(flag==1){
        printf("Element found.\n");
    }
    else{
        printf("Element not found.\n");
    }

    return 0;
}