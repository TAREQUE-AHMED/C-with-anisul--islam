#include<stdio.h>
#include<math.h>
int main(){
    double x = 1.50;
    //double result = log10(x);
    //double result = exp(x);
    //double result = sin(x);
    //double result = round(x);
    //double result = trunc(x);
    //double result = ceil(x);
    double result = floor(x);
    printf("floor(%lf) = %lf\n", x, result);
    return 0;
}