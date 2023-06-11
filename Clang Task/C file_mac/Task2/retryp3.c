#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int disp_car(int n, int save_value_car1);
int disp_car2(int n, int save_value_car2);

int main(){
    int Driving_time;
    int car_1,car_2;
    int save_value_car1 = 0,save_value_car2 = 0;
    printf("input Driving_time:");
    scanf("%d", &Driving_time);
     srand((unsigned int)time(NULL));
     char user_key;

    
        for(int i = 0; Driving_time > i; i++ ){

            
            printf("계속하려면 g키를 누르시오:");
            scanf(" %c", &user_key);
            if('g' == user_key){

            car_1 = rand() % 101;
            
            
            save_value_car1 = disp_car(car_1,save_value_car1);
            
            car_2 = rand() % 101;

            save_value_car2 = disp_car2(car_2,save_value_car2);

            printf("-----------------------------\n");
            
            }

        }
        return 0 ;
        


}
int disp_car(int n ,int save_value_car1){

    //새로운 랜덤 수, 별을 볓개찍었는지 저장값(이전에서의)
    int car_1_result;
    
    n = n / 10;

    // n = 6;
    

    car_1_result = n + save_value_car1;
    
    //계속해서 더해져 저장되는수 = 6 + 0;

    printf("CAR #1:");
    for(int i = 0; car_1_result > i; i++){

        // 6 > 0;
        printf("*");


    }
    printf("\n");

    return car_1_result;

    //별의 개수 몇개 찍었는지.


 }
 int disp_car2(int n,int save_value_car2){
    int car_2_result;

    n = n / 10;
    car_2_result = n + save_value_car2;
        printf("CAR #2:");

    for(int i = 0; car_2_result > i; i++){

        printf("*");


    }
    printf("\n");

    return car_2_result;


    
 }