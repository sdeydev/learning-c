// 5) Find First Occurrence

// Take an array and a target element.

// Print the FIRST index where target appears.

// Stop searching once first occurrence is found.

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
            printf("First occurrence of target is at index : %d",i);
            flag = 1;
            break;
        }
    }
    if(flag==0){
        printf("Target is not found.\n");
    }

    return 0;

}