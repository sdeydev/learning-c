// 1) Find Length of String Without strlen()
// Input
// Enter string: Computer
// Output
// Length of string = 8

#include<stdio.h>
int main(){
    char str[10];
    int i;

    printf("Enter string: ");
    scanf("%s",str);

    int length = 0;
    for(i=0;str[i]!='\0';i++){ // checks until str[i] = null terminator
        length++;
    }
    printf("Length of string : %d",length);

    return 0;
}