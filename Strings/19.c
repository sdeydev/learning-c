// 19) Find Smallest Word in a Sentence
// Input
// Enter string: I love programming
// Output
// Smallest word: I

#include<stdio.h>
int main(){

    char str[100];
    int i;

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }

    int current_len = 0;
    int current_start;
    int min_len = 100; // if its 0 , it never updates with the curr len< min len condition.
    int min_start;

    
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            current_len++;
            if(i==0||str[i-1]==' '){
               current_start=i; 
            }
        }
        if(str[i]==' '){
            if(current_len<min_len){
                min_len = current_len;
                min_start = current_start;
            }
            current_len = 0;
        }
    }

     if(current_len<min_len){
            min_len = current_len;
            min_start = current_start;
        }

    printf("Smallest word : ");
    for(i=min_start;i<min_start+min_len;i++){
        printf("%c",str[i]);
    }

    printf("\n");

    return 0;
}