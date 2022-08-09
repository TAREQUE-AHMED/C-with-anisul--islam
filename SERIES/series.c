//1-2+3-4+5-6+........n
#include<stdio.h>
int main(){
    int n, odd = 0, even = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <=n; i++)
    {
        if(i%2==0){
            even = even + i;
        }
        else{
            odd = odd + i;
        }
    }
    printf("sum of this series is %d\n", odd - even);
    return 0;
}