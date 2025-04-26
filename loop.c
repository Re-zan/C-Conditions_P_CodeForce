#include<stdio.h>

int main(){
     int first_num, second_num, sum=0, oddNum=0;
     scanf("%d %d", &first_num, &second_num);
        for(int i=2; i<first_num; i++){
             if( i %2 !=0){
                oddNum++;
             }
             
        }
        printf("%d ",oddNum);
        return 0;
}