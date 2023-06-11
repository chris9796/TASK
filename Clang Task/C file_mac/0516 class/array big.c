#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main(){

 srand((unsigned)time(NULL));

    int a[SIZE];

    for(int i = 0; SIZE > i; i++ ){

     a[i] = rand() % 101;
     int MAX = a[1];


    //  for(int i = 0; SIZE > i; i++){


    if(MAX < a[i])
        MAX = a[i];
    
    

     }
     printf("큰수%d", MAX);
    
    }
    
    


    



//}