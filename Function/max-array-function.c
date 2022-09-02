#include<stdio.h>
// int maximum(int x[]){
//     int i;
//     int max = x[0];
//     for (i = 1; i<= 5; i++)
//     {
//         if(max<x[i]){
//             max = x[i];
//         }
//     }
//     return max;
// }
int maximum(int x[]){
    int i;
    int max = x[0];
    for (i = 1; i <= 5;i++){
        if(max<x[i]){
            max = x[i];
        }
    }
    return max;
}
int main(){
    int num[5] = {10, 4, 3, 2, 0};
   int maximumValue= maximum(num);
   printf("Maximum= %d\n", maximumValue);
}