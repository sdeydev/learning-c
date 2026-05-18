// 11)

// Find the frequency of every element in an array.

// Example:

// 1 2 2 3 1 1

// Output:

// 1 -> 3 times
// 2 -> 2 times
// 3 -> 1 time

// (Do NOT use sorting.)

#include<stdio.h>
int main(){
    int a[100];
    int n,i,j;

    printf("Enter the no of terms: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count = 0;
    int flag = 0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){ // count all occurences.
            if(a[i]==a[j]){
                count++;
            }
        }
        for(j=0;j<i;j++){ // mark duplicate occurences.
            if(a[i]==a[j]){
                flag = 1;
            }
        }
        if(flag==0){ // not PRINTING duplicates.
            printf("The frequency of %d is: %d\n",a[i],count);
        }
        count = 0; // resetting count and flag to 0.
        flag= 0;
    }

    return 0;
}