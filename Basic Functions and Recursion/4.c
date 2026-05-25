// 4. Find Maximum of 3 Numbers using Function

// Input
// 12 45 8

// Output
// Maximum = 45

#include<stdio.h>

int max(int a,int b,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=c && b>=a){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int n1,n2,n3;

    printf("Enter num1, num2, num3: ");
    scanf("%d%d%d",&n1,&n2,&n3);

    printf("Max number is: %d",max(n1,n2,n3));
    
    return 0;

}
