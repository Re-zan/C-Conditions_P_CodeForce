#include<stdio.h>

int main(){
        int num1, num2, num3, minimum =0, maximum =0;
        scanf("%d %d %d", &num1,  &num2, &num3);
;
        if(num1 >=num2 && num1 >=num3){
                maximum =num1;
              
        }else if(num2 >= num1 &&  num2 >=num3){
                        maximum =num2;      
        }else{
                maximum =num3;
        }
        if(num1 <=num2 && num1 <=num3){
                minimum =num1;
              
        }else if(num2 <= num1 &&  num2 <=num3){
                minimum =num2;      
        }else{
                minimum =num3;
        }
        printf("%d %d" , minimum, maximum);
        return 0;
}