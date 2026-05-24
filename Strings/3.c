// 3) Count Total Vowels and Consonants in a String
// Input
// Enter string: HelloWorld
// Output
// Vowels = 3
// Consonants = 7

#include<stdio.h>

int main(){
    char str[100];
    int i;

    printf("Enter string: ");
    scanf("%[^\n]",str);
    
    int vowels = 0;
    int consonants = 0;
    for(i=0;str[i]!='\0';i++){
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a'&& str[i]<='z')){

            if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n",vowels);
    printf("Consonants: %d\n",consonants);

    return 0;
}