// 11. Swap using Call by Value

// Input
// a = 10
// b = 20

// Output
// a = 10 b = 20

#include<stdio.h>

void call_by_value(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n1,n2;

    printf("Enter 2 num: ");
    scanf("%d%d",&n1,&n2);

    printf("Before swapping(call by value): num1 = %d, num2 = %d.\n",n1,n2);
    call_by_value(n1,n2);
    printf("After swapping(call by value): num1 = %d, num2 = %d.\n",n1,n2);

    return 0;
}
