#include<stdio.h>
#include<math.h>
int main(){
    double base, exp, result=1;
    printf("Enter the value of base and exp: ");
    scanf("%lf %lf", &base, &exp);

    // result = pow(base, exp);
    // printf("Result is:%.1lf\n", result);
    for (int i = 1; i <= exp;i++){
        result = result * base;
    }
    printf("Result is: %.1lf\n", result);
    return 0;
}