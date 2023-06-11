#include <stdio.h>

void add(int num1, int num2)
{
    static addcnt = 0;
    addcnt++;
    printf("덧셈은 총 %d 번 실행되었습니다.\n", addcnt);
    printf("연산결과는 %d\n",num1 + num2);
}
void sub(int num1, int num2)
{

}
void mul (int num1, int num2){
    static divcnt = 0;
    divcnt++;
    printf("나눗셈은 총 %d 번 실행되었습니다.\n", divcnt);
    printf("연산결과는 %d\n", num1 * num2);
    
}



int main(){
    
    int num1, num2;
    char op;

    for(int i = 0; i < 10; i++){
        printf("연산을 입력하세요:");
        scanf("%d%c%d", &num1, &op, &num2);
        switch(op){
            case '+':
                add(num1,num2);
                break;
            case '-':
                sub(num1,num2);
                break;
            case '*':
                mul(num1,num2);
                break;
            case '/':
                div(num1,num2);
                break;



        }
    }


}