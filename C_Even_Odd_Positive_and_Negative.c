#include<stdio.h>

int main(){
     int even=0, odd=0, positive=0, negative=0, x, num;
     scanf("%d", &num);
     for(int i=1; i<=num; i++){
        scanf("%d", &x);
        if(x <0){
                negative++;
        }
        if(x >0){
                positive++;
        }
        if(x %2 ==0){
                even++;
        }
        if(x %2 !=0){
                odd++;
        }
     }
     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd,positive,negative);
        return 0;
}