#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Tareque Ahmed";
    printf("Normal string is: %s\n", str);
    strrev(str);
    printf("Reverse String is: %s\n", str);
    return 0;
}