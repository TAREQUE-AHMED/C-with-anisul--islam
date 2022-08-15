/*
1 0 1 
1 0
 1
*/
#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = n; row >= 1;row--){
        for (col = 2; col <= n-row;col++){
            printf(" ");
        }
        for (col = 1; col <= row;col++){
            printf("%d ", col % 2);
        }
        printf("\n");
    }
    return 0;
}