// Write a program to calculate sum,sub,multi,divide,remain of two number;
#include<stdio.h>
int main(){
    int num1, num2,result;
    printf("Enter Your Two number: ");
    scanf("%d %d", &num1, &num2);
    result = num1 + num2;
    printf("sum = %d\n", result);

    result = num1 - num2;
    printf("sub = %d\n", result);

    result = num1 * num2;
    printf("Multi = %d\n", result);

    result = num1 / num2;
    printf("div = %d\n", result);

    result = num1 % num2;
    printf("Remainder = %d\n", result);


}