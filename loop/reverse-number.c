#include<stdio.h>
int main(){
    int sum = 0, num, temp, rem;
    printf("Enter your number: ");
    scanf("%d", &num);
    temp = num;
    while (temp!=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;

    }
    printf("Reverse number: %d\n", sum);
    return 0;
}