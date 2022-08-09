#include<stdio.h>
#include<stdbool.h>
int main(){
    int years;
    printf("Enter any year: ");
    scanf("%d", &years);
    bool is_leap_year = (years % 400 == 0 && years % 100 != 0 || years % 4 == 0);
    if(is_leap_year){
        printf("It's a leap year");
    }
    else{
        printf("Year is not leap year");
    }
    return 0;
}