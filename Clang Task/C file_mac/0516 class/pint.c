#include <stdio.h>
void increment(int * p){
    (*p)++;
   
    
}
void changesign(int * p){
    *p = (*p) * -1;
}

int main(){

    int num1 =0, num2 = 4;

    increment(&num1);
    changesign(&num2);
    printf("%d", num1);
    printf("%d", num2);
}
//자료형에 따라서 숫자의 크기 증가가 다름
//4바이트를 사용하는 int 형이기때문에 증가하면 4바이트를 하나더 추가해야 새로운 int 를 만들수 있다.
// v = (*p)++
// v = ++*p