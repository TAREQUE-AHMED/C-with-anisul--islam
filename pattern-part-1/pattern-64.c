/*
1
23
456
78910
1112131415
*/
#include<stdio.h>
int main(){
    int n, col, row,count=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (row = 1; row <= n;row++){
        for (col = 1; col <= row;col++){
            printf("%d", ++count);
        }
        printf("\n");
    }
        return 0;
}