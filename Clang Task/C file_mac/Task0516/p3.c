#include <stdio.h>

int main(){

int grade[5] = {30,20,10,40,50};

for(int i = 0; i < 5;i++){
 printf("number %d: ",grade[i]);
    for(int a = 0; a < grade[i]; a++){
        printf("*");

    }
   printf("\n");
}



}