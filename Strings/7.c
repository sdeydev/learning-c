// 7) Find Frequency of All Characters in a String
// Input
// Enter string: banana
// Output
// b = 1
// a = 3
// n = 2

#include<stdio.h>
int main(){
    char str[100];
    int i,j;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
    }

    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            continue;
        }
        int freq = 0;
        int flag = 0;
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){ // for counting all occurrences
                freq++;
            }
        }
        for(j=0;j<i;j++){
            if(str[i]==str[j]){
                flag = 1; // marking the duplicates
            }
        }
        if(flag==1){
            continue; // skipping the duplicates
        }
        else{ 
            printf("Frequency of %c is : %d.\n",str[i],freq);
        }
    }

    return 0;
}