// 4)

// Find the second largest element in an array without sorting.

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

    int max = a[0];
    
    for(i=0;i<n;i++){
        max = a[i]>max? a[i] : max;
    }
    int seclarge = a[0];
    for(i=0;i<n;i++){
        if(a[i]==max){
            continue;
        }
        seclarge = (a[i]>seclarge)? a[i] : seclarge;
    }

    printf("Second largest number is: %d\n",seclarge);

    return 0;
}