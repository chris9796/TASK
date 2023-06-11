#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CLASS
#define STUDENTS 10
//srand 를 이용하여 

void test1(int a[]){
    printf("STUDENTS ID\ttest#1\ttest#2\ttest#3\n");
       for(int i = 0;STUDENTS > i; i++){
        a[i] = (rand() % 40)+1;
        printf("%d\t",i);
        printf("%d\t", a[i]);
        a[i] = (rand() % 90)+3;
        printf("%d\t", a[i]);
        a[i] = (rand() % 98)+11;
        printf("%d\n", a[i]);
        
        }
        // printf("\n");
        //  for(int i = 0;STUDENTS > i; i++){
      
        // printf("%d\n", a[i]);
        // }
        // printf("\n");
        //  for(int i = 0;STUDENTS > i; i++){
        
        // printf("%d\n", a[i]);
        // }
}




int main(){
    int a[STUDENTS];

    
    srand((unsigned)time(NULL));
    test1(a);
    
    //학번(for1~10) + 시험 + 시험2






}
