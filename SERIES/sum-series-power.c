//1^2+2^2+3^2+..............n^2
//1^3 + 2^3 + 3^3 ...............n^3
#include<stdio.h>
int main(){
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        sum = sum + i * i*i;
    }
    printf("sum of this series is %d\n", sum);
    return 0;
}