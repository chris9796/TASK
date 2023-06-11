#include <stdio.h>


    int big(int num1,int num2){
        
        if(num1>num2)
        return num1;
        else
        return num2;
    }



int main(){
int num1, num2;
printf("두개의 정수를 입력하시오:");
scanf("%d %d",&num1,&num2);
int result = big(num1,num2);


printf("%d",result);
}
