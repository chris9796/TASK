#include <stdio.h>
#include <stdlib.h>

int main(){
    int cadidate;
    int vote [] = {0,0,0,0,0,0,0,0,0,0};
    while(1){
    printf("몇번 후보자를 선택하시겠습니까?(종료-1)");
    scanf("%d",&cadidate);
    vote[cadidate - 1] += 1;
    
    if(cadidate == -1)
    exit(1);

    for(int i = 0; i < 10; i++){
        printf("%d\t%d\n",i + 1, vote[i]);
    }

    }
}