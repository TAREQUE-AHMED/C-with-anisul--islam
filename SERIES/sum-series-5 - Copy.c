//1+1/2+1/3+.............1/n
#include<stdio.h>
int main(){
    double i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%lf", &n);
    for (i = 1; i <= n; i++){
        sum = sum + (1 / i);
        if(i==1){
            printf("\n 1 + ");
        }
        else if(i==n){
            printf("(1/%.1lf)", i);
        }
        else{
            printf("(1/%.1lf) +", i);
        }
    }
    printf(" sum of series is %.1lf", sum);
    return 0;
}