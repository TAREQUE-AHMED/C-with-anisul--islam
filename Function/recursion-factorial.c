#include<stdio.h>
int fact(int n){
    if(n==1)
        return 1;
        else
            return n * fact(n - 1);
}
int main(){
    int result = fact(7);
    printf("Factorial of 7= %d", result);
}