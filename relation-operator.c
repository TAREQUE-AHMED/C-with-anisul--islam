#include<stdio.h>
#include<math.h>
int main (){
    int num;
    printf("Enter Any number: ");
    scanf("%d", &num);
    if(num%2==0){
        printf("Even number\n");
    }
    else{
        printf("Odd number\n");
    }
    return 0;
}