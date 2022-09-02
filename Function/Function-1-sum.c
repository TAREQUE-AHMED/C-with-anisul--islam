// #include<stdio.h>
// int sum(int a, int b){
// return a + b;
// }

// int main(){
//     int num1, num2;
//     printf("Enter the two number: ");
//     scanf("%d %d", &num1, &num2);
//     int result = sum(num1,num2);
//     //int result = sum(5,6);

//     printf("Sum is:%d\n",result);

    
// }
#include<stdio.h>
#include<string.h>
int main(){
    char a[100] = "ab";
     char b[100] = "cd";
     strcat(a, b);
     printf("%s", b);
     return 0;
}