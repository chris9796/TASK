#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void array_fill(int  *A, int size) {
    for(int i = 0;size > i; i++){
        A[i] = (rand() % 100) +1;
    }
}
 void array_print(int  *A, int size) {
    for(int i = 0; size > i; i++){
        printf("%d\t",A[i]);
    }
 }

int main(){
    srand((unsigned)time(NULL));
    int B[10] = {};

    array_fill(B,10);
    array_print(B,10);
   return 0;
}
