// 3. Reverse an Array Using Pointers

// Problem

// Reverse the array in-place using pointers only.

// Input

// 5
// 1 2 3 4 5

// Output

// 5 4 3 2 1

// Test Case

// Input:

// 6
// 10 20 30 40 50 60

// Output:

// 60 50 40 30 20 10

// Hint

// Use two pointers:

// left
// right

// and swap while they move toward each other.

#include<stdio.h>
#include<stdlib.h>

void rev(int *arr, int n){
    int *left = arr;
    int *right = arr+n-1;

    while(left<right){
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

}

int main(){
    int n, *p;

    printf("Enter array size : ");
    scanf("%d", &n);

    if(n<=0){
        printf("Invalid input\n");
        return 1;
    }

    int *arr = malloc(n*sizeof *arr);

    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter array elements: ");
    for(p=arr;p<arr+n;p++){
        scanf("%d",p);
    }
    
    rev(arr,n);
    printf("Reversed array: ");
    for(p=arr;p<arr+n;p++){
        printf("%d ",*p);
    }

    return 0;
}