//C=(F-32)/1.8
#include<stdio.h>
#include<math.h>
int main(){
    float c, F;
    printf("Enter your fahrenheit value: ");
    scanf("%f", &F);
    c = (F - 32) / 1.8;
    printf("Centigrade value is: %.2f", c);
    return 0;
}