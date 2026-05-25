// 20. Print Numbers from N to 1 using Recursion

// Input
// 5

// Output
// 5 4 3 2 1

#include<stdio.h>

void series_rev(int n){

    if(n==1){
        printf("1 ");
        return;
    }
    printf("%d ",n);
    series_rev(n-1);
}

int main(){
    int n;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input.\n");
        return 0;
    }

    printf("Reverse series: ");
    series_rev(n);

    return 0;
}