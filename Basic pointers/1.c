// 1. Swap Two Numbers Using Pointers

// Problem

// Write a function that swaps two integers using pointers.

// Function:

// void swap(int *a, int *b);

// Input

// 10 20

// Output

// 20 10

// Test Cases

// Input:

// 5 7

// Output:

// 7 5

// Input:

// -3 8

// Output:

// 8 -3

#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n1,n2;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&n1,&n2);

    printf("Before swapping : num1 = %d, num2 = %d\n",n1,n2);
    swap(&n1,&n2);

    printf("After swapping : num1 = %d, num2 = %d\n",n1,n2);
    return 0;
}