//1^2*2^2*3*2*.......n^2
//1^2*3^2*5^2*.......n^2
//2^2*4^2*6^2*.......n^2
#include<stdio.h>
int main(){
    int n, result = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    // for (int i = 1; i <=n; i+=2)
    // {
    //     result = result * i * i;
    // }
    for (int i = 2; i <=n; i+=2)
    {
        result = result * i * i;
    }
    // for (int i = 1; i <=n; i++)
    // {
    //     result = result * i * i;
    // }
    printf("Multiplication of series is %d", result);
    return 0;
}