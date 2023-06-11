#include <stdio.h>
int main(){

    int s[3][5];
    int value = 0;

    for(int n = 0; n < 3; n++){
        for(int i =0; i< 10; i++)
         s[n][i] = value++;
    }
    for(int n = 0; n < 3; n++){
        for(int i =0; i< 10; i++)
         printf("%3d", s[n][i]);
         printf("\n");
    }
    
}