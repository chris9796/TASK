#include <stdio.h>
#include <stdlib.h>
int main(){
    char answer;
    int n_st_seat;
    int a[] = {0,0,0,0,0,0,0,0,0,0};
    while(1){
    printf("좌석을 예약 하시겠습니까? (y 또는 n)");
    scanf(" %c", &answer);
    
    if('y' == answer){
        printf("----------------------\n");
        printf("1 2 3 4 5 6 7 8 9 10\n");

        for(int i = 0; i < 10; i++ ){
            printf("%d ", a[i]);
            

        }
        

        printf("몇번째 좌석을 예약하시겠습니까?");
        scanf("%d", &n_st_seat);
        for(int i = 0; a[n_st_seat] >  )
        if(a[n_st_seat] == 0)
        a[n_st_seat - 1] += 1;  //무작정 +1을 하면 안될듯?
        // 이미 예약이 되어있는 좌석이면 +1 자체를 하면 안됨
        

        for(int i = 0; i < 10; i++ ){
            
            printf("%d ", a[i]);
            

        }
        for(int i = 0; i< 10; i++){

            if(a[n_st_seat - 1] > 1){
                printf("이미 예약된 자리입니다. 다른좌석을 선택하세요");
                a[n_st_seat - 1] = 1;
        
            }
            else
            break;
          //만약에 예약이 되어있으면 (1)이면 예약 문구와 함께 다시 좌석 선택 
            //똑같은 자리에 입력했을때만 예약되었다고 나타남
        }
        


        
    }
    else
    break;
    }

}