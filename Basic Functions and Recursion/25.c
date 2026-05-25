// 25. Reverse a String using Recursion

// Input
// hello

// Output
// olleh

#include<stdio.h>
void revstr(char *str, int first, int last ){ // first = 1st index; last = last index of string
    if(first>=last){ // base case
        return;
    }
    char temp = str[first]; // the swapping
    str[first] = str[last];
    str[last] = temp;

    revstr(str, first + 1, last - 1); // recursive call (starting index going up, last index going down -- inward)

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

    int last = i-1; // bcz, i switched '\n' to '\0' so last valid index is i-1
    int first = 0;

    printf("Reversed string: ");
    revstr(str,first,last);
    for(i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
    }

    return 0;
}

