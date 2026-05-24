// 2) Traverse and Print Each Character of a String
// Input
// Enter string: Hello
// Output
// H
// e
// l
// l
// o

#include<stdio.h>
int main(){
    char str[10];
    int i;

    printf("Enter string: ");
    scanf("%s", str); // stores a single word

    for(i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }

    return 0;
}