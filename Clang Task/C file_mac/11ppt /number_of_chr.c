#include <stdio.h>
#define SIZE 200
int str_chr(char *s, char c){
    int num = 0;
//*s 는 나중에도 값을 저장할것 그냥 c는 지금만 사용하고 값을 버릴것
    for(int i = 0;s[i] != '\0'; i++){
        if(s[i] == c){
            num++;
        }
    }
    return num;
}



int main(){
    char str[SIZE] = {};
    char wk;
    printf("input str");
    fgets(str,SIZE,stdin);
    printf("what kind of str do you count");
    scanf("%c", &wk);
    
    printf("number of %c: %d",wk,str_chr(str,wk));
    
}