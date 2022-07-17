#include<stdio.h>
int main(){
    int ch;
    printf("Enter your letter: ");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' || ch=='A' || ch=='E' ||ch=='I' ||ch=='O' ||ch=='U'){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
    return 0;
}