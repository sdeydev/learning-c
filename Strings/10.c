// 10) Convert String into Toggle Case
// Input
// Enter string: HeLLo
// Output
// hEllO


#include<stdio.h>
int main(){
    char str[100];
    int i,j;

    printf("Enter string: ");
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
        else if(str[i]>='a' && str[i]<='z'){
            str[i]-=32; // ASCII value -- 'a' - 'A' = 32
        }
    }
    printf("After case toggle: ");
    for(i=0;str[i]!=0;i++){
        printf("%c",str[i]);
    }

    printf("\n");

    return 0;
}