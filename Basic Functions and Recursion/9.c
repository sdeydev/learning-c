// 9. Find LCM using Function

// Input
// 12 18

// Output
// LCM = 36

#include<stdio.h>
int lcm(int a,int b){
    int n1 = a;
    int n2 = b;
    int rem = 1;
    while(rem!=0){
        rem = a%b;
        a = b;
        b = rem;
    }
    return (n1*n2)/a;
}
int main(){
    int n1,n2;

    printf("Enter 2 num: ");
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
        printf("Undefined LCM.\n");
        return 0;
    }
    if(n1==0||n2==0){
        printf("LCM of %d and %d is: 0\n",org1,org2);
        return 0;
    }

    printf("LCM of %d and %d is: %d\n",org1,org2,lcm(n1,n2));

    return 0;
}
