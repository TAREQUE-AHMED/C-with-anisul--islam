#include<stdio.h>
int main(){
    int i, j, numberOfRows, numberOfCols;
    int A[10][10], B[10][10], C[10][10];
    printf("Enter the value of rows and cols: ");
    scanf("%d %d", &numberOfRows, &numberOfCols);

    printf("Enter the element of A:\n ");
    for (i = 0; i < numberOfRows;i++){
        for (j = 0; j < numberOfCols;j++){
            printf("A[%d][%d]= ",i,j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("Enter the element of B:\n ");

    for (i = 0; i < numberOfRows;i++){
        for (j = 0; j < numberOfCols;j++){
            printf("B[%d][%d]= ",i,j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    printf("\nA= " );
    for (i = 0; i < numberOfRows;i++){
        printf("\t");
        for (j = 0; j < numberOfCols;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    printf("\nB= " );
    for (i = 0; i < numberOfRows;i++){
        printf("\t");
        for (j = 0; j < numberOfCols;j++){
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    printf("A+B=\n");
    for (i = 0; i < numberOfRows; i++)
    {
        for (j = 0; j < numberOfCols;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

       for (i = 0; i < numberOfRows;i++){

        for (j = 0; j < numberOfCols;j++){
            printf("%d ", C[i][j]);
        }
         printf("\n");
        //printf("");
    }
        return 0;
}