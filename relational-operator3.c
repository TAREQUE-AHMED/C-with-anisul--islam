#include<stdio.h>
#include<math.h>
int main(){
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d", &marks);
    if(marks>100 && marks<0){
        printf("Invalid marks");
    }
    else if(marks>=80){
        printf("A+");
    }
    else if(marks>=70){
            printf("A");
    }
    else if(marks>=60){
        printf("B+");
    }
    else if(marks>=50){
        printf("B");
    }
    else if(marks >=40){
        printf("C");
    }
    else if(marks>=33){
        printf("D");
    }
    else{
        printf("Fail");
    }
    return 0;
}