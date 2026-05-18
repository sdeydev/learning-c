// 7)

// Delete an element from a given position in an array.

// Shift remaining elements properly.

#include<stdio.h>
int main(){
    int a[100];
    int n,i,pos;

    printf("Enter the no terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter position to delete(eg. 1/2/3..): ");
    scanf("%d",&pos);

    if(pos<1 || pos>n){
        printf("Invalid position.\n");
        return 0;
    }

    printf("Before deletion: ");
    for(i= 0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=pos-1;i<n;i++){
        a[i]=a[i+1];
    }
    n--;
    
    printf("After deletion: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    
    return 0;
}