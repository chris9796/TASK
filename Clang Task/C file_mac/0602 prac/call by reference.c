#include <stdio.h>
int increment(int *pa, int *pb){
    return ++(*pa);
}
int changesing(int *a,int *b){
    return -(*a);
}


int main(){
    int a = 5,b = 10;

    int sum = increment(&a,&b);
    int tmp = changesing(&a,&b);
    printf("%d",sum);
    printf("%d",tmp);
    
}
