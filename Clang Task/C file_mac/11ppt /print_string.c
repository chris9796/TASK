#include <stdio.h>
// int main(){
//     char str[4] = "abc";
//     printf("%s", str);
//     return 0;
// }
int main(void)
{
    
	char str1[6] = "Seoul";
    
	char str2[3] = { 'i', 's', '\0' };
	char str3[] = "the capital city of Korea.";
    
	printf("%s %s %s\n", str1, str2, str3);
}
