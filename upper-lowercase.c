#include<stdio.h>
int main(){
    char upper;
    printf("Enter your uppercase letter: ");
    scanf("%c", &upper);
    printf("The lowercase letter is: %c", upper + 32);
    return 0;
}