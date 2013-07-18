/* 130129 */
/*
#include <stdio.h>
#include <string.h>
#define STR_LEN 100


int main(){
	char str[STR_LEN];
	int strLen = 0;
	int diff = 'A' - 'a';
	puts("문자열 입력 : ");
	gets(str);

	strLen = strlen(str);
	for(int i = 0 ; i < strLen ; i++){
		if('a' <= str[i] && str[i] <= 'z')
			str[i]+=diff;
		else if ('A' <= str[i] && str[i] <= 'Z'){
			str[i]-=diff;
		}
	}
	puts(str);
	return 0;
}
*/
