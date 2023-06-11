#include <stdio.h>


double add(double num1,double num2);
double sub(double num1,double num2);
double mul(double num1,double num2);
double div(double num1,double num2);
int main(){
    char formula;
        double num1,num2,result;
    int number = 10;
    printf("what calculate do you want (input +,-,*,/)");
    scanf("%lf %c %lf",&num1, &formula, &num2);

    
    
while(10){
    for(int i =0; number > i; i++ ){
    
   if('+' == formula){
    
     printf("%f",result);

   }
   

    else if('-' == formula){
    result = add(num1,num2);
    printf("%f",sub(num1,num2));
    break;
    }

    else if('*' == formula){
    result = add(num1,num2);
    printf("%f",mul(num1,num2));
    break;
    }

    else if('/' == formula){
    result = add(num1,num2);
    printf("%f",div(num1,num2));
    break;
    }
    else{
    printf("It is not supported formula");
    break;
    }
    result += result;

    
    printf("\n%d번 실행되었습니다.\n",number);

}
}




}



double add(double num1,double num2){
    double result;
    result = num1 + num2;
    return result;
}
double sub(double num1,double num2){
    double result;
    result = num1 - num2;
    return result;
}
double mul(double num1,double num2){
    double result;
    result = num1 * num2;
    return result;
}
double div(double num1,double num2){
    double result;
    result = num1 / num2;
    return result;
}