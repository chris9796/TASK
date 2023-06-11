#include <stdio.h>

void swap(int * a, int * b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(){
    int num1 = 100, num2 = 200;
    printf("함수 호출전 : num1 = %d , num2 = %d\n ", num1, num2);
    swap(&num1,&num2);
    printf("함수 호출후 : Num1 = %d, num2 = %d\n", num1,num2);
    return 0;
}