#include<stdio.h>
#include<string.h>
int main(){
    char str1[] = "tareque ahmed";
    char str2[] = "TAREQUE AHMED";

    strupr(str1);
    strlwr(str2);
    
    printf("STR= %s\n", str1);
    printf("STR2= %s\n", str2);
    return 0;
}