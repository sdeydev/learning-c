// 14)

// Perform right rotation of an array by one position.

// Example:

// 1 2 3 4 5

// Output:

// 5 1 2 3 4

#include<stdio.h>
int main(){
    int i,n;
    int a[10];

    printf("Enter the no of terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    } 

    printf("The array before the right rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    int first = a[n-1];
    for(i=n-2;i>=0;i--){
        a[i+1]=a[i];
    }
    a[0]=first; 

    printf("The array after the right rotation: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}