#include <stdio.h>
#define SIZE 7

void printf_array(int Array[],SIZE){
    for(int i = 0; SIZE > i; i++){
        printf("%d", Array[i]);

    }
}
void square_array(int Array[], SIZE){
    for(int i = 0; SIZE > i; i++){
       Array[i] = Array[i] * Array[i];
    }

}

int main(){
   int list[SIZE] = {1,2,3,4,5,6,7};

   printf_array(list,SIZE);//배열 출력하는 함수
   square_array(list,SIZE);//배열의 요소를 제곱한 값
   printf_array(list,SIZE);//

}