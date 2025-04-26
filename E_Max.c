#include<stdio.h>
#include<limits.h>

int main(){
     int maximum=INT_MIN , num, x=0;
     scanf("%d", &num);
        for (int i = 1; i <= num; i++)
        {   
                 
     scanf("%d", &x);
     if ( x > maximum) {
        maximum = x; 
    }
 
        }
        printf("%d",maximum);
         return 0;
}