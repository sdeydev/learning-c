// 1. Sum of Two Numbers using Function

// Input
// 10 20

// Output
// Sum = 30

#include<stdio.h>

int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter number 1: ");
    scanf("%d",&a);

    printf("Enter number 2: ");
    scanf("%d",&b);

    printf("The sum of the 2 numbers is: %d",sum(a,b));

    return 0;

}
