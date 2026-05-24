// 4) Count Digits, Alphabets and Special Characters
// Input
// Enter string: CSE123@#
// Output
// Alphabets = 3
// Digits = 3
// Special characters = 2

#include<stdio.h>
int main(){
    char str[100];
    int i;


    printf("Enter string: ");
    fgets(str, sizeof(str), stdin); // reads until newline or size limit -- includes newline before null terminator

    for(i=0;str[i]!='\0';i++){
        if(str[i]=='\n'){
            str[i]='\0'; // removing newline char '\n' and placing null terminator '\0'
            break;
        }
    }

    int dig = 0;
    int alph = 0;
    int spchar = 0;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){
            alph++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            dig++;
        }
        else if(str[i]==' '){ // spaces -- not special characters
            continue;
        }
        else{
            spchar++;
        }
    }
    printf("Alphabets: %d\n",alph);
    printf("Digits: %d\n",dig);
    printf("Special characters: %d\n",spchar);

    return 0;
}