// 4. Count Vowels in a String Using a Pointer

// Problem

// Count vowels in a string using pointer traversal.

// Input

// Hello World

// Output

// 3

// (vowels: e, o, o)

// Test Cases

// Input:

// Programming

// Output:

// 3

// Input:

// Sky

// Output:

// 0

// Hint

// Move through the string like:

// char *ptr = str;

// while(*ptr != '\0')

#include<stdio.h>

int vowels(char *str){
    char *ptr = str;
    int count=0;
    while(*ptr!='\0'){
        if(*ptr=='A'||*ptr=='a'||*ptr=='E'||*ptr=='e'||*ptr=='I'||*ptr=='i'||*ptr=='O'||*ptr=='o'||*ptr=='U'||*ptr=='u'){
            count++;
        }
        ptr++;
    }
    return count;
}

int main(){
    char str[100],*ptr=str; // or -- malloc(100) -- since char == 1 byte

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    while(*ptr!='\0'){
        if(*ptr=='\n'){
            *ptr='\0';
            break;
        }
        ptr++;
    }

    printf("Vowel count: %d\n",vowels(str));
    return 0;
}
