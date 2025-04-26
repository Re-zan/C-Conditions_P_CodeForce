#include<stdio.h>

int main(){
     int num, first_num, second_num;
     scanf("%d", &num);
     first_num= num/10;
     second_num=num%10;
     if(second_num % first_num ==0 ||first_num % second_num ==0 ){
        printf("YES");
     }else{
        printf("NO");
     }
    
        return 0;
}