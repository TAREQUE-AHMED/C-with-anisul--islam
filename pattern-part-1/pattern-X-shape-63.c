#include<stdio.h>
int main(){
    int n, col, row;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= n;col++){
            if(row==col || row+col==n+1){
                printf("*");
            }
            else
            {
                /* code */
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}