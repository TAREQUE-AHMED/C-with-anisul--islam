/*
A B C D E 
A B C D E
A B C D E
A B C D E
A B C D E
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= n;col++){
            printf("%c ", col + 64);
        }
        printf("\n");
    }
    return 0;
}