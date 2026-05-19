//  8) Sort Only Even Numbers

// Take an array.
// Sort only the even elements in ascending order while keeping odd elements in their original positions.

// Input6

// Enter array size: 6
// Enter array elements: 8 3 6 1 4 5

// Output

// Array after sorting even elements: 4 3 6 1 8 5

#include<stdio.h>
int main(){

    int a[10],b[10];
    int n,i,j;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    
    int even = 0; // to count how many even no
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            b[even]=a[i]; // to store them ina different array
            even++;
        }
    }

    for(i=0;i<even-1;i++){ // even -- size of even array
        for(j=0;j<even-i-1;j++){ // bubble sorting b[]
            if(b[j]>b[j+1]){
                int temp = b[j+1];
                b[j+1] = b[j];
                b[j]= temp;
            }
        }
    }
    int pos = 0; // pos as index in sorted even array
    for(i=0;i<n;i++){ // traversing org array
        if(a[i]%2==0){
            a[i]=b[pos]; // current index in sorted even array
            pos++;
            }
        }
    
    printf("Array after sorting even elements: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    printf("\n");

    return 0;
}