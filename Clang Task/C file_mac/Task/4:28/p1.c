#include <stdio.h>
//1~100까지 숫자중 5의 배수만 출력.
int main(){
    int a = 0;
    while(a <= 100){

        while(a % 5 == 0){
            printf("%d",a);
            break;
        }
        a++;
       
    }

}