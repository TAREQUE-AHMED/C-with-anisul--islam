#include<stdio.h>
int main(){
    int num[100], n, i;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the element of array: ");

    for ( i = 0; i <n; i++)
    {
        scanf("%d", &num[i]);
    }

    int max = num[0];
    // int min= num[0];
    for (i = 1; i < n;i++){
        // if(min>num[i]);
        if(max<num[i])
            max = num[i];
        
    }
    printf("Maximum is: %d\n", max);
    return 0;
}