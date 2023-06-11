#include <stdio.h>
void decimal(int range_of_decimal);
int main(){

    int range_of_decimal;

    printf("range_of_decimal: ");

    scanf("%d",&range_of_decimal);

    decimal(range_of_decimal);



    
}
void decimal(int range_of_decimal){

    int increasing_num1;
    int increasing_num2;

    for(increasing_num1 = 2; range_of_decimal > increasing_num1; increasing_num1++){

        for(increasing_num2 = 2; increasing_num1 > increasing_num2; increasing_num2++){

            
            if(increasing_num1 % increasing_num2 == 0)
            break;



        }

    if(increasing_num1 == increasing_num2)
        printf("%d\n",increasing_num1 );




    }
    

}