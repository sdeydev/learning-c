// 2) Check if the entered number has repetitions or not using array.

#include<stdio.h>
int main(){
    int a[]={0};
    int n;

    printf("Enter number: ");
    scanf("%d",&n);

    int rem;
    while(n>0){
        rem = n%10;
        if(a[rem]==1){
            break;
        }
        a[rem]=1;
        n = n/10;
    }
    if(n>0){
        printf("There is repetition.\n");
    }
    else{
        printf("There is no repetition.\n");
    }
    return 0;
}