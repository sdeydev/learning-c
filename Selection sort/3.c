// ## 3) Print Array After Every Pass

// Take an array and sort it using Selection Sort.
// Print the array after every pass.

// ### Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3

// ### Output

// After pass 1: 1 2 4 5 3
// After pass 2: 1 2 4 5 3
// After pass 3: 1 2 3 5 4
// After pass 4: 1 2 3 4 5

#include<stdio.h>
int main(){
    int a[10];
    int n,i,j;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        printf("After pass %d: ",i+1);
        int minindex = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex = j;
            }
        }
        int temp = a[i];
        a[i]= a[minindex];
        a[minindex]=temp;

        for(j=0;j<n;j++){
            printf("%d ",a[j]);
        }
        printf("\n");
    }

    return 0;
}