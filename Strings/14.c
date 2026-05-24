// 14) Compare Two Strings Without strcmp()
// Input
// Enter first string: hello
// Enter second string: hello
// Output
// Strings are equal.

#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i,j;

    printf("Enter string 1 : ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string 2 : ");
    fgets(str2, sizeof(str2), stdin);
    
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]=='\n'){
            str1[i]='\0';
            break;
        }
    }
    for(i=0;str2[i]!='\0';i++){
        if(str2[i]=='\n'){
            str2[i]='\0';
            break;
        }
    }
    int len1 = 0;
    for(i=0;str1[i]!='\0';i++){
        len1++;
    }
    int len2 = 0;
    for(i=0;str2[i]!='\0';i++){
        len2++;
    }

    if(len1!=len2){
        printf("Strings are not equal.\n");
    }
    else{
        int flag = 1;
        for(i=0;str1[i]!=0;i++){
            if(str1[i]!=str2[i]){
                flag = 0;
                break;
            }
        }
        if(flag==0){
            printf("Strings are not equal.\n");
        }
        else{
            printf("Strings are equal.\n");
        }
    }

    return 0;
}