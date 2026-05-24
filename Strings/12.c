// 12) Check Whether String (single word) is Palindrome or Not
// Input
// Enter string: madam
// Output
// Palindrome string.


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
    int length = 0;
    for(i=0;str[i]!='\0';i++){
        length++;
    }

    int flag = 1;
    for(i = 0; i<length/2; i++){
        if(str[i]!=str[length-i-1]){
            flag = 0;
        }
    }

    if(flag==0){
        printf("Not Palindrome.\n");
    }
    else{
        printf("Palindrome string.\n");
    }

    return 0;
}