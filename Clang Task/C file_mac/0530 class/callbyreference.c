#include <stdio.h>
void increment(int *pa, int *pb);
void changesign(int *a,int *b);


int main(){
    int a =1 ,b =10;
    
    

    increment(&a,&b);
    printf("a = %d \tb= %d",a,b);
    changesign(&a,&b);
    printf("a = %d \tb= %d",a,b);
}
void increment(int *pa, int *pb){
    ++(*pa);
   
    (*pb)++;
}
void changesign(int *a,int *b){
    *a = *a * -1;
    *b = *b * -1;
    
}


