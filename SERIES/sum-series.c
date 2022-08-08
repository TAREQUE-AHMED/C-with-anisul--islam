//1+2+3+..............n
//2+4+6+............n
//1+3+5+.............n 
//1+4+7+............n
#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // for (int i = 1; i <= n;i++){
    //     sum = sum + i;
    // }

    // for (int i = 2; i <= n; i+=2){
    //     sum = sum + i;
    // }

    for (int i = 1; i <= n; i+=2){
        sum = sum + i;
    }

        printf("Sum of series is %d", sum);

    return 0;
}