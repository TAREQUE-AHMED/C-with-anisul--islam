//1.5+2.5+3.5+.........n
#include<stdio.h>
int main(){
float n,i, sum = 0;
    printf("Enter the value of n: ");
    scanf("%f", &n);
    for (i = 1.5; i<=n;i++){
        sum = sum + i;
    }
    printf("sum of series is= %.1f\n", sum);
    return 0;
}