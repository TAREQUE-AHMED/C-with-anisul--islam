#include<stdio.h>
int main(){
    char s1[] = "Tareque";
    int i = 0, len = 0;
    while(s1[i]!=0){
        i++;
        len++;
    }
    printf("Length= %d\n", len);
    return 0;
}