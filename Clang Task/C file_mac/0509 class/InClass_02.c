#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void inc(int n) {
    n += 1;     // Asterisk 없음
}

void inc_2(int* n) {
    *n += 1;    // Asterisk 있음
}

int main(void) {
    // declare variables
    int i = 10;
    printf("Call by Value, 함수 호출 전: %d\n", i);
    inc(i);     // main에서는 inc의 매개변수인 n이 보이지 않음
    printf("Call by Value, 함수 호출 후: %d\n", i);

    printf("--------------------\n");

    printf("Call by Reference, 함수 호출 전: %d\n", i);
    inc_2(&i);    // main에서 <i>의 주소값을 <inc_2> 함수로 보냄
    printf("Call by Reference, 함수 호출 전: %d\n", i);

    // end program
    return 0;
}