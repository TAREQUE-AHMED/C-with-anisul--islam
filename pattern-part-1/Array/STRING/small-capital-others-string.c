#include<stdio.h>
#include<stdio.h>
int main(){
    char str[60];
    int i, capital, small, digit;
    i = small = capital = digit = 0;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0'){
        if(str[i]>=65 && str[i]<=90){
            capital++;
        }
        else if(str[i]>=97 && str[i]<=122){
            small++;
        }
        else if(str[i]>=48 && str[i]<=57){
            digit++;
        }
        i++;
    }
    printf("Number of capital letter: %d\n", capital);
    printf("Number of small letter: %d\n", small);
    printf("Number of digit letter: %d\n", digit);
    return 0;
}