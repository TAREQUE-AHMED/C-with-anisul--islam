#include<stdio.h>
int main(){
    int A[10][10], transpose[10][10], i, j, row, col;
    printf("Enter row and cols for matrix: ");
    scanf("%d %d", &row, &col);
    for (i = 0; i < row;i++){
        for (j = 0; j < col;j++){
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < row;i++){
        for (j = 0; j < col;j++){
            transpose[j][i] = A[i][j];
        }
    }
        printf("Enter the matrix:\n");
    for (i = 0; i < row;i++){
        for (j = 0; j < col;j++){
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix: \n");
    for (i = 0; i < col;i++){
        for (j = 0; j < row;j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
        return 0;
}