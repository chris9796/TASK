#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //size10 배열 선언하고 난수를 발생시켜서 저장, 출력
    srand((unsigned)time(NULL));
    int a[10];
    for(int i = 0; 10 > i; i++ ){
     a[i] = rand() % 101;
    printf("%d\n",a[i]);
    }
    
    


}
//양의 정수만된다.