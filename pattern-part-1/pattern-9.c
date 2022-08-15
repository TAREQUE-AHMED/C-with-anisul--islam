/*
101
10
1
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = n; row >= 1; row--){
        for (col = 1; col <= row;col++){
            printf("%d", col % 2);
        }
        printf("\n");
    }
    return 0;
}