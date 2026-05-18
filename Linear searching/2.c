// 2) Print Position of Element

// Take an array and a target element.

// Print the position/index where the element is found.

// If not found, print appropriate message.

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
    int pos;
    for(i=0;i<n;i++){
        if(a[i]==target){
            flag = 1;
            pos = i;
            break;
        }
    }

    if(flag == 1){
        printf("Target is found at index : %d or position : %d.\n",pos,pos+1); // indexing starts from 0.
    }
    else{
        printf("Target is not found.\n");
    }
    return 0;

}