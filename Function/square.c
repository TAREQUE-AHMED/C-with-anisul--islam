 #include<stdio.h>
 int result(int a){
     return a * a;
 }
 int main(){
     int num;
     printf("Enter the number: ");
     scanf("%d", &num);
     printf("Result of square is: %d\n", result(num));
 }