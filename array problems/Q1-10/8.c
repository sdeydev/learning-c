// 8)

// Insert an element at a given position in an array.

// Shift elements accordingly.

#include<stdio.h>
int main(){

    int a[100],n,i;
    int pos,elem;

    printf("Enter the no terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter position and element to enter: ");
    scanf("%d%d",&pos, &elem);

    if(pos<1||pos>n+1){
        printf("Invalid position.\n");
        return 0;
    }
    
    printf("Before insertion: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    for(i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1] = elem;
    n++;

    printf("After deletion: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    printf("\n");

    return 0;
}