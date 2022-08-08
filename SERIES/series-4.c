//1+2+3.......... n
# include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    i = 2;
    //i = 1;
    while(i<=n){
        printf("%d\n", i);
        i+=2;
    }
    // for (int i = 1; i <= n;i++){
    //     printf("%d\n", i);
    // }
    return 0;
}