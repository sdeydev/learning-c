// 4) Print All Positions

// Take an array and a target element.

// Print all indices where the target occurs.

// Example:

// Array: 4 2 7 2 9 2
// Target: 2

// Output:
// 1 3 5

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
            if(flag==0){
                printf("The indices where the target occurs are: ");
                flag = 1;
            }
            printf("%d ",i);
        }
    }
    if(flag==0){
        printf("Target is not found.\n");
    }
    printf("\n");

    return 0;

}