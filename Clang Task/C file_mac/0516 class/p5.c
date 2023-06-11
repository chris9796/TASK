#include <stdio.h>

int main(){
    int a[5];
    int result = 0;
    for(int i = 0; 5 > i; i++ ){
        printf("%d번째 학생 성적입력: ", i+1);
        scanf("%d", &a[i]);
        result += a[i];
        
    }
    printf("평균은 %f",result/(double)5);
}