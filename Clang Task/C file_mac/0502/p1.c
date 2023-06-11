#include <stdio.h> 

void draw_rect(int size)
{
     for(int i=0; i < size; i++){
        for(int a=0; a < 6; a++){

            printf("*");
        }
        printf("\n");
    }

}

int main(){

    int n;
    printf("정수를 입력하세요");
    scanf("%d",&n);


    draw_rect(n);
    return 0;

}