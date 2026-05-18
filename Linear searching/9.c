// 9) First Even Number

// Take an array.

// Find the FIRST even number and print:

// value
// index

// If no even number exists, print message.

#include<stdio.h>
int main(){

    int a[10];
    int i,n;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    int flag = 0;
    
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            flag = 1;
            printf("The first even number is: %d at index: %d.\n",a[i],i);
            break;
        }
    }
    if(flag==0){
        printf("There is no even number present in the array.\n");
    }

    return 0;

}
