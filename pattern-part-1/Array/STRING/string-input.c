#include<stdio.h>
int main(){
    char s1[30];
    printf("Please enter your full name: ");
    gets(s1);
    printf("Full Name Is: %s\n", s1);
    return 0;
}