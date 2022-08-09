// centigrade to fahrenheit
// F=(c*1.8)+32
#include<stdio.h>
#include<math.h>
int main(){
    float c, F;
    printf("Enter the value of centigrade: ");
    scanf("%f", &c);
    F = (c * 1.8) + 32;
    printf("Value of fahrenheit is: %.1f", F);
    return 0;
}