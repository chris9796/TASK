#include <stdio.h>
#include <string.h>

#define SIZE 100
int get_response(char * prompt){
   char positive_answer[100];
   char negative_answer[100];
}
int main(){
    char input[SIZE];
    printf("Do you like clang?\t");
    
    fgets(input,SIZE,stdin);
    input[strlen(input)-1] = '\0';
    
    int response = get_response(input);
    if(response == 1)
    printf("긍정적인 답변");
    else if(response == 0)
    printf("부정적인 답변");


}