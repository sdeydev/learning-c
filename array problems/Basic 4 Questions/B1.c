// 1) Reverse an user input 1-d int array.

#include<stdio.h>
int main(){
    int a[100];
    int i,n;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    printf("Enter an array of integers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    //original array
    printf("Original array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    //reversed array
    printf("Reversed array: ");
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}