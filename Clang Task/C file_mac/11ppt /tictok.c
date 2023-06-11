#include <stdio.h>
#include <string.h>
#define SIZE 100
int getNumWords(char * S){
    int num_of_word = 0;
    char * tok = strtok(S," ");

    char StringTwo[10] = "Test Test";
     
     while(tok != NULL){
        num_of_word++;
        printf("%s\n", tok);
        tok = strtok(StringTwo," ");
     }

     return num_of_word;
     
}


int main(){
    char str[SIZE];
    char strcpy1[SIZE];
    printf("input string: ");
    fgets(str,SIZE,stdin);
  strcpy(strcpy1,str);
    printf("sum of word : %d" ,(getNumWords(strcpy1)));
  



}