#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int disp_car (int car_1);
void disp_car2 (int car_2);
int main(){
    int car_1, car_2;
    int Driving_time;
    int result1 = 0,result2;
    char user_key;
    printf("주행시간을 입력하세요:");
    scanf("%d",&Driving_time);
    srand((unsigned int)time(NULL));
    
    

    for(int i = 0; i < Driving_time; i++){
        
        printf("계속하려면 g를 누르시오 :");
        scanf(" %c", &user_key);

                if('g' == user_key){
                car_1 = ((rand() % 10) +1);
                result1 = disp_car(car_1);
                result1 = result1 + result1;
                car_2 = ((rand() % 10) +1);
                disp_car2(car_2);


                // printf("CAR#1:%")

                // for(int a = 0; result_1 > a; a++ )


                
                printf("----------------------\n");
                }
                else
                break;


    }
    return 0;
}
int disp_car(int car_1){
    int result_1;
    result_1 = car_1;
    
    printf("CAR #1 :");
    for(int i = 0; result_1 > i; i++)
        printf("*");

    
    printf("\n");
    return result_1;
//  
    

}

void disp_car2(int car_2){
    int result_2;
    result_2 = (car_2 + car_2) / 10;
    printf("CAR #2 :");
    for(int i = 0; result_2> i; i++)
        printf("*");
        printf("\n");
}




