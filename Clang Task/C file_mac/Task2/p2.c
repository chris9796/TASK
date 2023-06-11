#include <stdio.h>
#define PI 3.14

double cal_area(double radius);

int main(){
    
    double radius ;
   printf("input of radius:");
   scanf("%lf",&radius);

    

    
    printf("%f",cal_area(radius));
    
}

double cal_area(double r){
     
     
     
     double area_of_circle;

    area_of_circle = r * r * PI;
    
     return area_of_circle ;


}