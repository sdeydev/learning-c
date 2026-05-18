// 3) Count Occurrences

// Take an array and a target element.

// Count how many times the target appears.

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

    int count=0;
    for(i=0;i<n;i++){
        if(a[i]==target){
            count++;
        }
    }

    if(count==0){
        printf("Target is not found.\n");
    }
    else{
        printf("The target %d appears %d times.\n",target,count);
    }
    
    return 0;

}