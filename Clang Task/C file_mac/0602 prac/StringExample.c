#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_NUMCHARS 50

//<S> 안에 있는 단어 수 세는 함수
int getNumWords(char* S);

int main(void) {
    //변수 선언
    char MyString[MAX_NUMCHARS];
    int numWords;

    //유저로부터 입력값 받기
    printf("글을 입력하세요: ");
    fgets(MyString, MAX_NUMCHARS, stdin);
    //현재 MyString에 저장된 마지막 캐릭터는 <\n>이기 때문에 정석대로 NULL로 변경
    MyString[strlen(MyString)-1] = '\0';

    //총 단어 수 계산
    numWords = getNumWords(MyString);

    //결과물 출력
    printf("총 단어의 개수는 : %d\n", numWords);

    //프로그램 종료
    return 0;
}

//<S> 안에 있는 단어 수 세는 함수
int getNumWords(char* S) {
    //변수 선언
    char SCopy[MAX_NUMCHARS];   //<S>의 복사본 선언만 함.
    strcpy(SCopy, S);           //<S>를 <SCopy>로 복사
    int numWords = 0;           //총 단어 수
    char* charToken;            //캐릭터 토큰(포인터) 생성.

    charToken = strtok(S, " "); //charToken 포인터를 <S>의 첫번째 조각으로 지정.
    while (charToken != NULL) {
        numWords++;
        charToken = strtok(NULL, " ");
    }

    return numWords;
}