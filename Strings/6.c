// 6) Find Frequency of a Given Character in a String
// Input
// Enter string: programming
// Enter character: g
// Output
// Frequency of g = 2

#include<stdio.h>
int main(){
    char str[100];
    int i;
    char target;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }
    printf("Enter character to find frequency: ");
    scanf("%c",&target);


    int freq = 0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==target){
            freq++;
        }
    }
    printf("Frequency of target %c is %d.\n",target,freq);

    return 0;
}