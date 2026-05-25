// 10. Sum of Series using Function : 1/1!+1/2!+...+1/n!

// Input
// 5

// Output
// Sum of series for n=5 is: 1.716667

#include<stdio.h>
float series_sum(int n){
    int i;
    float sum = 0;
    int fact = 1;
    for(i=1;i<=n;i++){
        fact*=i;
        sum += 1.0/fact;
    }
    return sum;
}
int main(){
    int n;

    printf("Enter no of terms: ");
    scanf("%d",&n);

    if(n<=0){
        printf("Invalid input.\n");
        return 0;
    }

    printf("Series sum: %.6f\n",series_sum(n));

    return 0;
    
}
