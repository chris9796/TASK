#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//난수 발생기 
// srand(unsigned  seed) 함수: seed 값을 매번 다른값으로 초기화 시켜야 제대로 난수 발생
//실제 사용: srand(time(NULL))
//time.h 안에 정의된 함수 time ()이용
int main(void){
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; i++){
        printf("%d\n",rand()%101);
        
    }

}
//원하는 범위의 난수 발생: 0~100 % 101
//1~45 %44 + 1
//%45는 % 0~ 44까지
//%44 +1  1~ 44까지
//