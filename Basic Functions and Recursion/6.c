// 6. Fibonacci Series using Function

// Input
// 7

// Output
// 0 1 1 2 3 5 8

#include<stdio.h>

int fib(int n){
    int i;
    int a=0,b=1;
    if(n==1){
        return a;
    }
    if(n==2){
        return b;
    }

    int next=0;
    for(i=3;i<=n;i++){

        next = a+b;
        a= b;
        b = next;

    }
    return next;
}

int main(){
    int i,n;

    printf("Enter no of terms: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input.\n");
        return 0;
    }

    printf("Fibonacci series: ");
    for(i=1;i<=n;i++){
        printf("%d ",fib(i));
    }
    printf("\n");

    return 0;
}
