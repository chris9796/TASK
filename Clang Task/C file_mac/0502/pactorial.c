//정수를 입력받아 ㅠㅐㄱ토리얼을 구하는 함수 factorail 을 구현하세요.
#include <stdio.h>
int pact (int num1){
int result;
        for(int a = 1; num1 > a; a++){
            
            result = a * num1;
        }
        return result;

}
int main(){
int result;
        int num1, result;
        printf("정수를 입력하세요:");
        scanf("%d",&num1);
        int result  = pact(num1);
    //     for(int a = 1; num1 > a; a++){
    //          result = a * num1;
    //     }
    // printf("%d", result);
 printf("%d", result);

}