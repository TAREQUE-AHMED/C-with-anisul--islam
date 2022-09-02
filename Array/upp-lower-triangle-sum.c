#include<stdio.h>
int main(){
    int A[3][3], i, j,upperSum=0,lowerSum=0;
    printf("Enter the element of the matrix:\n ");
    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            printf("A[%d][%d]= ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3;i++){
        for (j = 0; j < 3;j++){
            if(i<j){
                upperSum = upperSum + A[i][j];
            }
            if(i>j){
                lowerSum = lowerSum + A[i][j];
            }
        }
    }
    printf("Sum of upper triangle element is: %d\n", upperSum);
    printf("Sum of lower triangle element is: %d\n", lowerSum);
    return 0;
}