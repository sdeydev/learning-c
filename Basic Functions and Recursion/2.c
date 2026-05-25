// 2. Find Square of a Number using Function

// Input
// 6

// Output
// Square = 36

#include<stdio.h>
int sqr(int a){
    return a*a;
}
int main(){
    int a;
    printf("Enter number : ");
    scanf("%d",&a);

    printf("Square of %d is: %d",a,sqr(a));
    return 0;
}