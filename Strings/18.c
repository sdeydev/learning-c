// 18) Find Largest Word in a Sentence
// Input
// Enter string: I love programming
// Output
// Largest word: programming

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

    int current_len=0;
    int max_len=0;

    int current_start;
    int max_start;

    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){ // char not space so start counting current len
            current_len++;
            if(i==0||str[i-1]==' '){ // char not space -- is 1st char or it has space behind it -- a new word starting -- thats start of a word --  current start = i
               current_start=i;
            }
        }
        if(str[i]==' '){ // current char a space -- word has ended -- doesn't check last word though bcz it ends with '\0'
            if(current_len>max_len){ 
                max_len = current_len;
                max_start = current_start; // update both starting and length if its larger in length than prev word
            }
            current_len = 0; // reset current len to 0 bcz, a word has ended. need to increase it again when another word starts
        }
    }

    // doing the last word check bcz str=='\0' so current len is not reset to 0 -- so it still contains the len of last word
    if(current_len>max_len){ // if it isnt the last word this is not true bcz current len resets to 0.
        max_len = current_len;
        max_start = current_start; // updating again bcz the last word might be the the largest
    }

    printf("The largest word is : ");
    for(i=max_start;i<max_start+max_len;i++){ // max word boundary = max start to max start + max len
        printf("%c",str[i]);
    }
    
    return 0;
}
