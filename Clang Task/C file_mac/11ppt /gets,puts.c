#include <stdio.h>
int main(void)
{
	char name[100];
	char address[100];
	printf("이름을 입력하시오: ");
	get(name, sizeof(name)/sizeof(name[0]));
	printf("현재 거주하는 주소를 입력하시오: ");
	get(address, sizeof(address)/sizeof(address[0]));
	puts(name);
	puts(address);
	return 0;
}
