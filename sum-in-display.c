// Write a program that takes two integer and display sum and average
#include<stdio.h>
int main(){
    int num1, num2, sum;
    printf("Enter Your Two Numbers: ");
    scanf("%d%d", &num1, &num2);
    sum = num1 + num2;
    printf("Sum = %d\n", sum);
    // float avg;
    // avg = (float)sum / 2;
    // printf("Average is: %.2f\n",avg);
    // return 0;
    return 0;
}