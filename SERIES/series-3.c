// 1*2+2*3+3*4+.........n1*n2;
//2*3+4*5+6*7+.....+n1*n2
#include<stdio.h>
int main(){
    int n1, n2, sum = 0, a = 2, b = 3;
    printf("Enter the value of n1 and n2: ");
    scanf("%d %d", &n1, &n2);
   // printf("1*2 + 2*3 + 3*4 + ..... + %d * %d", n1, n2);
   printf("2*3 + 4*5 + 6*7 + ..... + %d * %d", n1, n2);
    while(a<=n1 && b<=n2){
        sum = sum + a * b;
        a = a + 2;
        b = b + 2;
    }
    printf("= %d", sum);
    return 0;
}