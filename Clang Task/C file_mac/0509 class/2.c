#include <stdio.h>


int main(){

    int num1 = 10, num2 =20;
    printf("호출전 : %d , %d ,num1, num2");
    swap(num1, num2);
    printf("호출전 : %d %d ,num1,num2");
    return 0;

}

swap(int num1, int num2){

    num1 += num2;

    num2 += num1;
    
    return 
}