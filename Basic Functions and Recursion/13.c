// 13. Find Sum of Array Elements using Function

// Input
// 1 2 3 4 5

// Output
// Sum = 15

#include<stdio.h>
int arrsum(int a[],int n){
    int i;
    int sum = 0;
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    return sum;
}

int main(){
    int a[100];
    int i,n;

    printf("Enter array size(<=100): ");
    scanf("%d",&n);

    if(n<=0 ||n>100){
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Sum of array elements: %d\n",arrsum(a,n));

    return 0;
}
