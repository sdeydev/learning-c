// 23. Fibonacci using Recursion

// Input
// 6

// Output
// 0 1 1 2 3 5

#include<stdio.h>

int fib(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int n;
    printf("Enter no of terms: ");
    scanf("%d", &n);

    if(n<=0){
        printf("Invalid input.\n");
        return 0;
    }
    printf("Fibonacci series: ");
    for(int i=1;i<=n;i++){
        printf("%d ",fib(i));
    }
    
    return 0;
}
