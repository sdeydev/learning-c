// 17. Reverse String using Function

// Input
// coding

// Output
// gnidoc

#include<stdio.h>

int len(char *str){
    int i;
    for(i=0;str[i]!='\0';i++){} // or i = 0 ; while(str[i]!='\0'){ i++ } -- same thing
    return i;
}
void revstr(char *str){
    int i;
    int length = len(str);
    for(i=0;i<length/2;i++){
        char temp = str[i];
        str[i]=str[length-i-1];
        str[length-i-1]=temp;
    }
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

    revstr(str);

    int length = len(str);
    printf("Reversed string: ");
    for(i=0;i<length;i++){
        printf("%c",str[i]);
    }

    return 0;
}
