#include <stdio.h>
#include p2.c
extern int global;

int main(){
    global++;
   printf("%d\n", global);
}