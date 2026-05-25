// 16. Find String Length using Function

// Input
// hello

// Output
// Length = 5

#include<stdio.h>

int len(char *str){
    int i;

    for(i=0;str[i]!='\0';i++){} // empty body -- bcz -- at the end of loop i==length
    return i; // or could introduce a var len before loop and len++ inside loop .. and return len -- same
}

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

    printf("Length of the string : %d\n",len(str));
}
