//  7) Find kth Largest Element Using Bubble Sort

// Take an array and a value `k`.
// Use Bubble Sort logic to find the kth largest element.

// Input

// Enter array size: 5
// Enter array elements: 5 2 4 1 3
// Enter k: 2


// Output

// 2nd largest element is: 4


#include<stdio.h>
int main(){

    int a[10];
    int n,k;
    int i,j;

    printf("Enter size of array: ");
    scanf("%d",&n);
    
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    
    for(i=0;i<k;i++){ // 1 pass means -- 1st largest locked -- k passes repeats -- kth largest locked
        for(j=0;j<n-i-1;j++){ // what each pass do -- comparison / swap
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j]= temp;
            }
        }
    }
    char *deg; // deg points to the first character of strings -- "st"/"nd"/"rd"/"th"
    if(k==1){
        deg = "st";
    }
    else if(k==2){
        deg = "nd";
    }
    else if(k==3){
        deg = "rd";
    }
    else{
        deg = "th";
    }
    printf("%d%s Largest element is: %d",k,deg,a[n-k]);

    return 0;
}