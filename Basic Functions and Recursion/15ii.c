// 15. Reverse an Array using Function

// Input
// 1 2 3 4 5

// Output
// 5 4 3 2 1

#include<stdio.h>

void rev(int *a, int n){ // As argument -- a[] or *a is same -- address of 1st element 
    int i,j;
    for(i=0;i<n/2;i++){ // actually reversing original array
        int temp = a[i];
        a[i]=a[n-i-1];
        a[n-i-1]= temp;
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

    rev(a,n);
    printf("Reversed array: ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }

    return 0;
}

