// 20) Check Whether Two Strings are Anagrams
// Input
// Enter first string: listen
// Enter second string: silent
// Output
// Strings are anagrams.

// ANAGRAMS : In strings, two strings are anagrams if:

// They contain the same characters
// Each character appears the same number of times
// Order does not matter
// Example Check

// "triangle" and "integral"

// Both contain:

// t, r, i, a, n, g, l, e

// So they are anagrams.

#include<stdio.h>
int main(){
    char str1[100],str2[100];
    int i,j;

    printf("Enter string 1 : ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter string 2 : ");
    fgets(str2, sizeof(str2), stdin);

    for(i=0;str1[i]!=0;i++){
        if(str1[i]=='\n'){
            str1[i]='\0';
        }
    }
    for(i=0;str2[i]!=0;i++){
        if(str2[i]=='\n'){
            str2[i]='\0';
        }
    }

    int len1 = 0;
    int len2 = 0;

    for(i=0;str1[i]!='\0';i++){
        len1++;
    }
    for(i=0;str2[i]!='\0';i++){
        len2++;
    }

    if(len1!=len2){
        printf("Strings are not anagrams.\n");
        return 0;
    }

    int is_anagram = 1;

    for(i=0;str1[i]!='\0';i++){
        int count1=0;
        int flag = 0;
        for(j=0;str1[j]!='\0';j++){
            if(str1[i]==str1[j]){
                count1++; // counting all occurrences of str1
            }
        }
        for(j=0;j<i;j++){
            if(str1[i]==str1[j]){
                flag = 1; // marking duplicates of str1
            }
        }
        int count2=0;
        if(flag==0){ 
            // if not duplicate --
            // if flag==0, current character has not appeared before.
            // so count and compare its frequency in both strings only once.
            for(j=0;str2[j]!='\0';j++){ // traversing str2 to compare with str1
                if(str1[i]==str2[j]){
                    count2++; // if str[i] == str[j] -- element matches -- freq of that element in str2 should increase -- count2 increses
                }
            } 
              
            // after counting a unique elements freq in both str1 and str2
            if(count1!=count2){ // if a single mismatch happen
                is_anagram = 0; // mark it and break -- no need to match further
                break;
            }
        }
        
    }

    if(is_anagram==0){
        printf("Strings are not anagrams.\n");
    }
    else{
        printf("Strings are anagrams.\n");
    }

    return 0;
}

