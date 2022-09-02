#include<stdio.h>
int main(){
    int num[] = {10, 20, 30, 50, 60, 70};
    int value, pos = -1;
    printf("Enter the value you want to search: ");
    scanf("%d", &value);
    for (int i = 0; i < 6;i++){
        if(value==num[i]){
            pos = i + 1;
            break;
        }
    }
    if(pos==-1){
        printf("Element not found");
    }
    else{
        printf("Element found at position %d",pos);
    }
    return 0;
}