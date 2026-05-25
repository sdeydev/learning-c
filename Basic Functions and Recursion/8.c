// 8. Find GCD using Function

// Input
// 12 18

// Output
// GCD = 6

#include<stdio.h>
int gcd(int a, int b){
    int rem=1;
    while(rem!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    return a;
}
int main(){
    int n1,n2;

    printf("Enter n1 and n2: ");
    scanf("%d%d",&n1,&n2);

    int org1 = n1;
    int org2 = n2;

    if(n1<0){
        n1 = -n1;
    }
    if(n2<0){
        n2=-n2;
    }
    if(n1==0&&n2==0){
        printf("Undefined GCD.\n");
        return 0;
    }
    if(n1==0||n2==0){
        printf("GCD of %d and %d is: %d\n",org1,org2,n1==0?n2:n1);
        return 0;
    }

    printf("GCD of %d and %d is: %d\n",org1,org2,gcd(n1,n2));

    return 0;
}
