#include<stdio.h>
int main(){
    float height, base, area;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    area = (float)1 / 2 * base * height;
    printf("Area: %.2f\n", area);
    return 0;
}