#include<stdio.h>
#include<string.h>
int main(){
    char str1[30] = "Rahat Shahariyar Rohan";
    char str2[30];
    int i=0,j,len=0;
    while (str1[i]!='\0')
    {
        i++;
        len++;
    }
    for (j = 0, i = len - 1; i >= 0; i--,j++){
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("Str1=%s\n", str1);
    printf("Str2=%s\n", str2);
    int d=strcmp(str1,str2);
    if(d==0){
        printf("String are palindrome");
    }
    else{
        printf("String are not palindrome");
    }

    return 0;
}