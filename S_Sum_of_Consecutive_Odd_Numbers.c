#include<stdio.h>

int main(){
   int n;
   scanf("%d", &n);
   for(int i=1;i<=n; i++ ){
        int first_num, second_num, sum=0;
        scanf("%d %d", &first_num, &second_num);
         if(first_num > second_num){
            int temp=first_num;
            first_num=second_num;
            second_num=temp;
         }
         for(int i=first_num +1;i<second_num; i++ ){
            if(i %2 !=0){
               sum +=i;
            }
   
         }
        printf("%d\n",sum);
   }
   
        return 0;
}