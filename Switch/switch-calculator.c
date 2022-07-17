#include<stdio.h>
int main(){
    double num1, num2;
    char operator;
    
    printf("Enter an operator: ");
    scanf("%c", &operator);
    printf("Enter two number: ");
    scanf("%lf %lf", &num1, &num2);
    switch (operator)
    {
    case '+':
        {
            printf("%lf + %lf = %lf\n", num1, num2, num1 + num2);
        
        break;
        }
        {
            printf("%lf - %lf = %lf\n", num1, num2, num1 - num2);
        
        break;
        }
        {
            printf("%lf * %lf = %lf\n", num1, num2, num1 * num2);
        
        break;
        }
        {
            printf("%lf / %lf = %lf\n", num1, num2, num1 / num2);
        
        break;
        }
       
    default:
        printf("Invalid operator");
        break;
    }
    return 0;
}