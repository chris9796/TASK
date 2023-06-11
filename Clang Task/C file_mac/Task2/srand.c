#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int car_1;
    srand((unsigned int)time(NULL));
    printf("난수 : %d\n", rand()% 101);
    printf("난수 : %d\n", rand()% 101);
    printf("난수 : %d\n", rand() % 101);
    printf("난수 : %d\n", rand() % 101);
    printf("난수 : %d\n", rand()  );

     srand((unsigned int)time(NULL));

        car_1 = rand() % 101;
        
        printf("%d", car_1);
}