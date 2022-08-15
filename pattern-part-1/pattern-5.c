/*
A 
A B
A B C
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= row;col++){
            printf("%c ", col + 64);
        }
        printf("\n");
    }
    return 0;
}