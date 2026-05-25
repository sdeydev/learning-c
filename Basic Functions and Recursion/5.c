// 5. Find Factorial using Function

// Input
// 5

// Output
// 120

#include<stdio.h>

int fact(int n){

    int i;
    int factorial = 1;

    if(n==0){
        return 1;
    }

    for(i=1;i<=n;i++){
        factorial*=i;
    }

    return factorial;
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    printf("Factorial of %d is : %d \n",n,fact(n));

    return 0;
}
