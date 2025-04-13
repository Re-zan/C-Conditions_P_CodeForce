#include<stdio.h>

int main(){
        int num;
        scanf("%d ", &num);
        int first_digit= num/1000;
        if(first_digit %2 ==0)
                printf("EVEN\n");
        else
        printf("ODD\n");

        int last_digit= num%10;
        printf("%d", last_digit);
           return 0;
   }