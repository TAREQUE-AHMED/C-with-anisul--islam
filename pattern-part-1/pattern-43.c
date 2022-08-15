/*
A A A A A 
B B B B B
C C C C C
D D D D D
E E E E E
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= n;col++){
            printf("%c ", row + 64);
        }
        printf("\n");
    }
    return 0;
}