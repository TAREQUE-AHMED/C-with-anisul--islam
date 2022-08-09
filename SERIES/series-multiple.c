//1*2*3*...........n
//1*3*5*...........n
//2*4*6*..........n
#include<stdio.h>
int main(){
    int n, result = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    /*
    for (int i = 1; i <= n;i++){
        result = result * i;
    }
    */
    for (int i = 2; i <= n; i+=2){
        result = result * i;
    }
    // for (int i = 1; i <= n;i+=2){
    //     result = result * i;
    // }
    printf("Multiplication of this series is %d", result);
    return 0;
}