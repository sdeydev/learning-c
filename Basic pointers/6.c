// 6. Write your own strlen function using pointer

// int mystrlen(char *str);

// Example:

// Input:

// OpenAI

// Output:

// 6

#include<stdio.h>

int mystrlen(char *str){
    char *ptr = str;
    int len = 0;

    for(ptr=str;*ptr!='\0';ptr++){ // or, while(*ptr){ptr++}
        len++;
    }

    return len; // then, return ptr-str --> returns relative subtraction value -- returns the number of elements between the two pointers -- size
}

int main(){
    char str[100];
    printf("Enter string: ");
    fgets(str,sizeof(str), stdin);

    char *ptr = str;
    while(*ptr!='\0'){
        if(*ptr=='\n'){
            *ptr = '\0';
            break;
        }
        ptr++;
    }

    int len = mystrlen(str);

    printf("The length of string: %d\n",len);

    return 0;
}
