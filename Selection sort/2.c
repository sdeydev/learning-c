// ## 2) Selection Sort in Descending Order

// Take an array and sort it in descending order using Selection Sort.

// ### Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3

// ### Output

// Sorted array: 5 4 3 2 1

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
        int maxindex = i;
        for(j=i+1;j<n;j++){
            if(a[j]>a[maxindex]){
                maxindex = j;
            }
        }
        int temp = a[i];
        a[i] = a[maxindex];
        a[maxindex] = temp;
    }
    printf("Sorted array (Descending order): ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }

    return 0;
}