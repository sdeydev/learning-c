// 16) Remove Spaces from a String
// Input
// Enter string: I love coding
// Output
// Ilovecoding

#include<stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }

    printf("String without spaces: ");
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            continue;
        }
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}