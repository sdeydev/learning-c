// 19. Print Numbers from 1 to N using Recursion

// Input
// 5

// Output
// 1 2 3 4 5

#include<stdio.h>
void series(int n){
    if(n==1){
        printf("1 ");
        return;
    }
series(n-1);
printf("%d ", n);

}
int main(){
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("series: ");
    series(n);
}
