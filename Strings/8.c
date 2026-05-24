// 8) Convert Lowercase String to Uppercase
// Input
// Enter string: hello
// Output
// HELLO

#include<stdio.h>
int main(){
    char str[100];
    int i,j;

    printf("Enter lowercase string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }

    for(i=0;str[i]!=0;i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32; // ASCII value -- 'a' - 'A' = 32
        }
    }
    printf("After uppercase toggle: ");
    for(i=0;str[i]!=0;i++){
        printf("%c",str[i]);
    }

    printf("\n");

    return 0;
}