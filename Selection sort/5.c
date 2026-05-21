// ## 5) Find kth Smallest Element Using Selection Sort

// Take an array and a value `k`.
// Use Selection Sort logic to find the kth smallest element.

// ### Input


// Enter array size: 6
// Enter array elements: 7 2 5 1 9 3
// Enter k: 3

// ### Output

// 3rd smallest element is: 3

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

    int k;
    printf("Enter k for kth smallest element: ");
    scanf("%d",&k);

    for(i=0;i<n-1;i++){
        int minindex = i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minindex]){
                minindex = j;
            }
        }
        int temp = a[i];
        a[i] = a[minindex];
        a[minindex] = temp;
    }

    printf("%d (st/nd/rd/th) smallest element is: %d",k, a[k-1]);

    return 0;
}