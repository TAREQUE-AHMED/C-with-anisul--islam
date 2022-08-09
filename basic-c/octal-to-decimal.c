#include<stdio.h>
int main(){
    int number;
    printf("Enter Your Octal Number: ");
    scanf("%o", &number);

    printf("Decimal Number is:%d", number);
    return 0;
}