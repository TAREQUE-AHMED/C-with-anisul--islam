/*
1 
2 4
3 6 9
4 8 12 16
*/
#include<stdio.h>
int main(){
    int col, row, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= row;col++){
            printf("%d ", col * row);
        }
        printf("\n");
    }
    return 0;
}