#include<stdio.h>
int main(){
    int i, j;
    int array[3][4];
    for (i = 0; i < 3;i++){
        for (j = 0; j < 4;j++){
            printf("array[%d][%d]= ", i, j);
            scanf("%d", &array[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < 3;i++){
        for (j = 0; j < 4;j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}