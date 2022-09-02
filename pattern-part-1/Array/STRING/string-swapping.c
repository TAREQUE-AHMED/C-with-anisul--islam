#include<stdio.h>
#include<string.h>
int main(){
    char str1[20] = "Bangladesh";
    char str2[20] = "Pakistan";
    char temp[20];

    printf("Before swapping:\n\n");
   
    printf("String1:%s\n",str1);
    printf("String2:%s\n",str2);

    printf("\n");

    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2,temp);

    printf("After swapping\n\n");
    printf("String1:%s\n",str1);
    printf("String2:%s\n",str2);
    return 0;
}