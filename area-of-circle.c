#include<stdio.h>
#include<math.h>
int main(){
    float r, area,pi=3.1416;
    printf("Enter your value: ");
    scanf("%f", &r);
    area = pi * r *r;
    printf("Area:%.2f", area);
    return 0;
}