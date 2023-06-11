#include <stdio.h>


int big(int num1,int num2){
    int result;
     result = num1 > num2 ? num1 : num2;
    return result;
}

int main(){
int num1, num2;
printf("두개의 정수를 입력하시오:");
scanf("%d %d",&num1,&num2);
int result = big(num1,num2);


printf("%d",result);
}