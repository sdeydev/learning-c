// 13) Copy One String to Another Without strcpy()
// Input
// Enter string: Apple
// Output
// Copied string: Apple

#include<stdio.h>
int main(){
    char str[100],cpystr[100];
    int i,j;

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    for(i=0;str[i]!='\0';i++){
        cpystr[i]=str[i];
    }
    cpystr[i] = '\0';
    
    printf("Copied string: ");
    for(i=0;cpystr[i]!='\0';i++){
        printf("%c",cpystr[i]);
    }
    printf("\n");

    return 0;
}