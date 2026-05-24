// 17) Count Total Words in a Sentence
// Input
// Enter string: C programming language
// Output
// Total words = 3

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
 // this logic can't handle sentences with multiple spaces b/w words
    int space_count = 0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            space_count++;
        }
    }

    printf("Word count : %d\n",space_count+1);
    return 0;
}