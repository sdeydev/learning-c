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

    // this logic is valid for multiple spaces
    int wordcount = 0;
    for(i=0;str[i]!=0;i++){
        if(str[i]!=' '&& (i==0||str[i-1]==' ')){ //doesnt start with space and either starts with starting index or prev character is space  
            wordcount++; // using i==0 to check if it is the first index....str[i]==str[0] is wrong because it compares character values and the same character may appear again later in the string.
        }
    }

    printf("Word count : %d\n",wordcount);
    return 0;
}