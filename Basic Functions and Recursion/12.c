// 12. Swap using Call by Reference

// Input
// a = 10
// b = 20

// Output
// a = 20 b = 10

#include<stdio.h>

void call_by_ref(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1,n2;

    printf("Enter 2 num: ");
    scanf("%d%d",&n1,&n2);

    printf("Before swapping(call by ref): num1 = %d, num2 = %d.\n",n1,n2);

    call_by_ref(&n1,&n2); // actually passing address as values

    printf("After swapping(call by ref): num1 = %d, num2 = %d.\n",n1,n2);

    return 0;
}
