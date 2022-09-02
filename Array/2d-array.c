#include<stdio.h>
int main(){
    int i, j;
    int array[3][4] = {{10, 20, 30, 40}, {25, 15, 35, 45}, {40, 50, 60, 70}};
    for (i = 0; i < 3;i++){
        for (j = 0; j < 4;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}