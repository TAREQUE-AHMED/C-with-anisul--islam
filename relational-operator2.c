#include<stdio.h>
#include<math.h>
int main(){
   /* int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("Large number is:%d", num1);
    }
    else if(num1<num2){
        printf("Large number is:%d", num2);
    }
    else{
        printf("Number are equal");
    }
    */
   int time;
   printf("Enter any number: ");
   scanf("%d", &time);
   if(time<=10){
       printf("Good morning\n Tareque");
   }
   else{
       printf("It's not perfect time\n Tareque");
   }

   return 0;
}