#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "My name is ";
    char str2[] = "Tareque Ahmed";
    strcat(str1, str2);
    printf("%s\n", str1);
    printf("%s\n", str2);
    return 0;
}