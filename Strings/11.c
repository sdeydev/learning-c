// 11) Reverse a String
// Input
// Enter string: coding
// Output
// gnidoc

#include<stdio.h>
int main(){
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    int length = 0;
    for(i=0;str[i]!='\0';i++){
        length++;
    }

    printf("Reversed string: ");
    for(i = length-1;i>=0;i--){
        printf("%c",str[i]);
    }
    printf("\n");

    return 0;
}