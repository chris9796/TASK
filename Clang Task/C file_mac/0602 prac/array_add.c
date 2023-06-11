#include <stdio.h>
#define SIZE 10
void array_add(int* A, int* B, int* C, int size) {
    for(int i = 0;SIZE > i; i++){
       C[i] = A[i] + B[i];
    }
}

int addNum(int x, int y) {
    int sum = x + y;
    return sum;
}

int main(){
    int A[10] = { 200, 100, 150, 200, 100, 150, 160, 170, 180, 200 };
    int B[10] = { 50, 20, 30, 0, 10, 30, 50, 10, 20, 10 };
    int C[10] = { 0 };
    
    //c배열에 a배열과 b배열의 합을 저장
    array_add(A,B,C, SIZE);
    //C배열 출력
    printf("Array C: [");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", C[i]);
    }
    printf("]\n");

    //프로그램 종료
    return 0;
}