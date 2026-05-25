// 22. Sum of First N Natural Numbers using Recursion

// Input
// 5

// Output
// 15

#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
int main(){
    int n;
    printf("Enter no of terms: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Invalid input.\n");
        return 0;
    }
    printf("Sum of first %d natural no: %d\n",n,sum(n));

    return 0;
}
