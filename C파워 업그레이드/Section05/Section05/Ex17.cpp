/* 130129 */

#include <stdio.h>
#include <string.h>
#define STR_LEN 20

int main(){
	char str[5][STR_LEN];
	char temp[STR_LEN];
	for(int i = 0 ; i < 5 ; i++){
		printf("문자열 입력 %d : ", i+1);
		gets(str[i]);
	}
	for(int i = 0 ; i < 4 ; i++){
		for(int j = i ; j <5-i-1 ; j++){
			if ( strlen(str[j]) > strlen(str[j+1])){
				strcpy(temp, str[j]);
				strcpy(str[j], str[j+1]);
				strcpy(str[j+1], temp);
			}
		}
	}
	for(int i = 0 ; i < 5 ; i++){
		scanf("%s\n", str[i]);
	}


	return 0;
}