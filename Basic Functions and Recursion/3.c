// 3. Check Even or Odd using Function

// Input
// 9

// Output
// Odd

#include<stdio.h>

void odd_even(int a){
    if(a%2==0){
        printf("Even number.\n");
    }
    else{
        printf("Odd number.\n");
    }
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    odd_even(a);
    return 0;
}
