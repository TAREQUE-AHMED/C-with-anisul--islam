#include<stdio.h>
double triangleArea(double b,double h){
    return 0.5 * b * h;
}
int main(){
    double base, height;
    printf("Enter the value of base and height: ");
    scanf("%lf %lf", &base, &height);
    double area = triangleArea(base, height);
    printf("Area of triangle is:%.1lf\n", area);
}