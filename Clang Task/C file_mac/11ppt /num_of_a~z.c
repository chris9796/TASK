#include <stdio.h>
#include <string.h>
#define SIZE 26

int main(){
    char str[100];
    int Alpa[SIZE] = {0};
    printf("input string: \t");
    fgets(str,100,stdin);
    str[strlen(str) - 1] = '\0';
    int length = strlen(str);

    for(int i = 0;length > i; i++){
        char a = str[i];
        Alpa[(int)a - 97] +=1;
    }
    for(int i = 0;SIZE > i; i++){
        printf("%c    %d\n",i+97,Alpa[i]);
    }
}