// 15. Reverse an Array using Function

// Input
// 1 2 3 4 5

// Output
// 5 4 3 2 1

#include<stdio.h>

void rev(int *a, int n){ // As argument -- a[] or *a is same -- address of 1st element 
    int i;
    for(i=n-1;i>=0;i--){ // not actually reversing org array -- just printing backwards
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100];
    int i,n;

    printf("Enter array size(1<=size<=100): ");
    scanf("%d",&n);

    if(n<=0 ||n>100){
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Reversed array: ");
    rev(a,n);
    return 0;
}

