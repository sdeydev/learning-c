// 7. Prime Number Check using Function

// Input
// 29

// Output
// Prime Number

#include<stdio.h>
int prime(int n){
    int i;
    int flag = 0;
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            flag = 1;
            return 1;
        }
    }
    if(flag==0){
        return 0;
    } 
}
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(n<=1){
        printf("Not prime.\n");
        return 0;
    }

    int check_prime = prime(n);

    if(check_prime==0){
        printf("prime.\n");
    }
    else{
        printf("Not prime.\n");
    }
    return 0;
}