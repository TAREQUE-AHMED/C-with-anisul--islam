#include<stdio.h>
#include<string.h>
int main(){
    char str1[50], ch;

    int i, vowel, consonant, words, digit, other;
    printf("Enter a string: ");
    gets(str1);
    i = vowel = consonant = words = digit = other = 0;
    while((ch=str1[i])!='\0'){
        if(ch=='a'||ch=='e' ||ch=='i'|| ch=='o'||ch=='u' ||
        ch=='A'||ch=='E' ||ch=='I'|| ch=='O'||ch=='U'){
            vowel++;
        }
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            consonant++;
        }
        else if(ch>='0' && ch<='9'){
            digit++;
        }
        else if(ch==' '){
            words++;
        }
        else{
            other++;
        }
        i++;
    }
    words++;

    printf("Number of vowel: %d\n", vowel);
    printf("Number of consonant: %d\n", consonant);
    printf("Number of digit: %d\n", digit);
    printf("Number of words: %d\n", words);
    printf("Number of other: %d\n", other);
    
    return 0;
}