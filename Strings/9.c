// 9) Convert Uppercase String to Lowercase
// Input
// Enter string: WORLD
// Output
// world

#include<stdio.h>
int main(){
    char str[100];
    int i,j;

    printf("Enter uppercase string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }

    for(i=0;str[i]!=0;i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]+=32; // ASCII value -- 'a' - 'A' = 32
        }
    }
    printf("After lowercase toggle: ");
    for(i=0;str[i]!=0;i++){
        printf("%c",str[i]);
    }

    printf("\n");

    return 0;
}