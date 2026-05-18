// 6) Find Last Occurrence

// Take an array and a target element.

// Print the LAST index where target appears.

#include<stdio.h>
int main(){

    int a[10];
    int i,n,target;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter target element: ");
    scanf("%d",&target);

    int flag = 0;
    for(i=n-1;i>=0;i--){
        if(a[i]==target){
            printf("The last index of the target is : %d.\n",i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("Target not found.\n");
    }
    return 0;
}