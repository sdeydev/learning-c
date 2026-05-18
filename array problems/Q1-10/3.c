// 3)

// Take n integers and print only the even elements in reverse order.

#include<stdio.h>
int main(){
    int a[100],n;
    int i;

    printf("Enter the no terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Even numbers reversed: ");
    for(i=n-1;i>=0;i--){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    printf("\n");
    return 0;
}