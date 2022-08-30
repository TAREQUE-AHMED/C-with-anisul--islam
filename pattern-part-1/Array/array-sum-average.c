//Array sum and average
#include<stdio.h>
int main(){
    int array[100], i, sum = 0, n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter your element: ");
    for (i = 0; i < n;i++){
        scanf("%d", &array[i]);
    }
    for (i = 0; i < n;i++){
        sum = sum + array[i];
    }
    printf("Sum of array is: %d\n", sum);
    printf("Average of sum is: %.2f\n", (float)sum / n);
    return 0;
}