#include<stdio.h>
#define  CorrectPassword 1999

int main(){
     int pass;
     for(; scanf("%d", &pass); ){
        if(pass == CorrectPassword){
                printf("Correct\n");
                break;
        }else{
                printf("Wrong\n");     
        }

     }
        return 0;
}