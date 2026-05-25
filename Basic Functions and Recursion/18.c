// 18. Palindrome String using Function

// Input
// madam

// Output
// Palindrome

#include<stdio.h>

int len(char *str){
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
int palinstr(char *str){
    int i;
    int length = len(str);

    for(i=0;i<length/2;i++){
        if(str[i]!=str[length-i-1]){
            return 0;
        }
    }
    return 1;
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

    int pal_check = palinstr(str);

    if(pal_check==0){
        printf("Not palindrome.\n");
    }
    else{
        printf("Palindrome.\n");
    }

    return 0;
}
