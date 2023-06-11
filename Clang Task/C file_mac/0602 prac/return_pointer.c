#include <stdio.h>

void convert(double * grades, double * scores,int size){
    for(int i = 0;size > i; i++){
        scores[i] = (grades[i] * 100) / 4.3;
    }
}
int main(){
    double grades[10] = { 3, 4.1, 4, 2, 2.6, 3.2, 3, 2.5, 3.3, 4.3 };
double scores[10] = { 0 };

    convert(grades,scores,10);

    for(int i = 0;10 > i;i++){
        printf("%f\t",scores[i]);
    }

}
