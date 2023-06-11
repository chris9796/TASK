#include <stdio.h>

int main(){
    // const int a = 10, b = 20;
    // int *pa = &a;
    // int *pb = &b;
    // pb = a;
    // printf("변수 a의 값 : %d\t",*pa);
    // // pa = &b;
    // printf("변수 b의 값 : %d\t", *pb);
    // // *pa = &a;
    // // *pa = 20;
    // printf("변수 a 값 : %d\n", *pa);
    int a = 10 , b =20;
    int *pa = &a, *pb = &b, *pt;
    pt = pa;
    pa = pb;
    pb = pt;
    printf("%d, %d" ,*pa, *pb);
    return 0 ;
}