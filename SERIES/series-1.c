//1+2+3+........+n
//1+3+5+7+......+n

#include<stdio.h>
int main(){
    int n, sum = 0, i;
    printf("Enter the last number of the series: ");
    scanf("%d", &n);
    //printf("1+3+5+....+%d", n);
    printf("1+2+3+....+%d", n);
    i = 1;
    while(i<=n){
        sum = sum + i;
        //i+=2
        i++;
    }
    printf(" = %d\n", sum);
    return 0;
}
