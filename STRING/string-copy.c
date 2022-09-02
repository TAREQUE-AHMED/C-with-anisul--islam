#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "C Programming";
    char target[50];
    strcpy(target,source);
    printf("Target String Is: %s\n", source);
    printf("Target String Is: %s\n", target);
    return 0;
}