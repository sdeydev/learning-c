// 5)

// Check whether an array is palindrome or not.

// Example:

// 1 2 3 2 1

// → Palindrome

#include<stdio.h>
int main(){
    int a[100],n;
    int i;

    printf("Enter the no terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int flag = 0;
    for(i=0;i<n/2;i++){
        if(a[i]!=a[n-1-i]){
            flag = 1;
            break;
        }
    }
    if(flag==1){
        printf("The Array is not a Palindrome.\n");
    }
    else{
        printf("The Array is a Palindrome.\n");
    }

    return 0;
}