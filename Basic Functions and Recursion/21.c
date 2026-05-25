// 21. Factorial using Recursion

// Input
// 5

// Output
// 120

#include<stdio.h>

int fact(int n){
    if(n==0||n==1){
        return 1;
    }

    return n*fact(n-1);
}

int main(){
    int n;

    printf("Enter no to find factorial: ");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial is not defined.\n");
        return 0;
    }

    printf("Factorial of %d is : %d\n",n,fact(n));

    return 0;
}
