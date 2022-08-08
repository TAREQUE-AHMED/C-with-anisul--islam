#include<stdio.h>
int main(){
    int num, temp, r, sum = 0;
    printf("Enter Your Number: ");
    scanf("%d", &num);
    temp = num;
    while(temp!=0){
        r = temp % 10;
        sum = sum + r * r * r;
        temp= temp / 10;
    }
    if(sum==num){
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
    return 0;
    
}