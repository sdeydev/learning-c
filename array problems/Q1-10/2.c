// 2)

// Take an array from user and count:

// positive numbers
// negative numbers
// zeros

#include<stdio.h>
int main(){
    int a[100], n;
    int i,pos=0,neg=0,zero=0;

    printf("Enter the no terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i= 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i = 0;i<n;i++){
        if(a[i]==0){
            zero++;
        }
        if(a[i]>0){
            pos++;
        }
        if(a[i]<0){
            neg++;
        }
    }
    
    printf("no. of positive num: %d\n",pos);
    printf("no. of negative num: %d\n",neg);
    printf("no. of zeros: %d\n",zero);
    
    return 0;
}