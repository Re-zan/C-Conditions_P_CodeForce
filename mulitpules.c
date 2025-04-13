#include<stdio.h>

int main(){
        int num1, num2;
        scanf("%d %d", &num1, &num2 );
        if(num1 <num2){
                int temp = num1;
                num1=num2;
                num2=temp;
        }
        if(num1 %num2==0)
        printf("Multiples");
        else
        printf("No Multiples");
           return 0;
   }