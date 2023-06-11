#include <stdio.h>
#define SUCCESS 1
#define FAIL 2
#define LIMIT 3

int check(char id, int pwd);

int main(){
    char id;
    int pwd;
    int result;
    while(1)
    {
        printf("id:");
        scanf("%c", &id);
        printf("pwd: ");
        scanf("%d", &pwd);


        result = check(id,pwd);
        if (result == SUCCESS)
        break;
    }
    printf("로그인성공\n");
    return 0;





}

int check(char id, int pwd){
    //일단 맞는 지만 확인
    if("chris" == id && 0000 == pwd)
    return 1;
    else
    return 2;

    

}