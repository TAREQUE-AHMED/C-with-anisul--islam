#include<stdio.h>
#include<math.h>
int main(){
    float a, b, area;
    printf("Enter Your value: ");
    scanf("%f %f", &a, &b);
    area = a * b;
    printf("Area:%.2f", area);
    return 0;
}