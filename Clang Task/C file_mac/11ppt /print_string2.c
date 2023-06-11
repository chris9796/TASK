#include <stdio.h>
int main(){
    char src[] = "The worst things to eat before you sleep";
	char dst[100];	
	int i;
   
	printf("원본 문자열=%s\n", src);
    for(i = 0;src[i] != '\0'; i++ ){
        dst[i] = src[i];
    }
    dst[i] = NULL; //왜 이렇게 하는지는 모름
    printf("%s",dst);
    
}