#include<stdio.h>
int main(){
    int num1, num2,sum,subtract;
    float num, num3, sum1, subtract1;
    printf("Enter Your integer number:\n");
    scanf("%d%d", &num1, &num2);
sum = num1 + num2;
    subtract = num1 - num2;
    printf("Enter two float number: ");
    scanf("%f %f", &num, &num3);
    
    
    sum1 = num + num3;
    subtract1 = num - num3;
    printf("%d\t", sum);
    printf("%d", subtract);
    printf("%f\t", sum1);
    printf("%f", subtract1);
    return 0;
}