/*
  1
 222
33333
 222
  1
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= n - row;col++){
            printf(" ");
        }
        for (col = 1; col <= 2 * row - 1;col++){
            printf("%d",row);
        }
        printf("\n");
    }
    for (row = n-1; row >= 1;row--){
        for (col = 1; col <= n - row;col++){
            printf(" ");
        }
        for (col =1; col <= 2 * row - 1;col++){
            printf("%d",row);
        }
        printf("\n");
    }
    return 0;
}