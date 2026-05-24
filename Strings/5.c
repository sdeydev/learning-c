// 5) Count Total Spaces in a String
// Input
// Enter string: I love coding
// Output
// Total spaces = 2

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

    int space = 0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space++;
        }
    }

    printf("Total spaces : %d\n",space);

    return 0;
}