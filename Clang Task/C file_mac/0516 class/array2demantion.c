#include <stdio.h>
#define CLASSES 3
#define STUDENTS 5
//각학급 학생의 성적의 평균을 구하시오.
int main(){
    double average;
     double sum;
    int s[CLASSES][STUDENTS]= {
        {0,1,2,3,4},
        {10,11,12,13,14},
        {20,21,22,23,24},
    };

    for(int i = 0; CLASSES > i; i++){
        
        for(int j =0; STUDENTS > j; j++ ){
            sum += s[i][j];

        }
        average = sum / STUDENTS;
         printf("%d 학급의 평균은 %f\n", i+1 ,average);
         sum = 0;
    }
    printf("전체 평균은 %f", average / CLASSES );
}