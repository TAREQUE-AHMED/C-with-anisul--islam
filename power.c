#include<stdio.h>
#include<math.h>
int main(){
    int x, y;
    printf("Enter the value of x,y: ");
    scanf("%d%d", &x, &y);
    double result = pow(x, y);
    printf("%.2lf", result);
    return 0;
}