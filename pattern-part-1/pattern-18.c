/*
A 
B B
C C C
B B
A
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= row;col++){
            printf("%c ", row + 64);
        }
        printf("\n");
    }
    for (row = n-1; row >= 1;row--){
        for (col = 1; col <= row;col++){
            printf("%c ", row + 64);
        }
        printf("\n");
    }
    return 0;
}