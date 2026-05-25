// 14. Find Largest Element in Array using Function

// Input
// 3 8 2 9 1

// Output
// Largest = 9

#include<stdio.h>

int largest(int a[], int n){
    int i;
    int max = a[0];
    for(i=1;i<n;i++){ // starting from 1 bcz a[0] = max -- no need to compare a[0]>a[0] again
        max = a[i]>max? a[i] : max;
    }
    return max;
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

    printf("Largest element: %d\n",largest(a,n));


    return 0;
}