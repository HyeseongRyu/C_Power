/***************************************************/
// Ex19. 함수의 기본                               //
// 13.06.25										  //
/***************************************************/

/*
#include <stdio.h>
#include <stdlib.h>

int fibo(int );

int main(){
	int num;

	printf("숫자 입력(1이상) : ");
	scanf("%d", &num);
	if(num<1){
		printf("입력이 잘못됬습니다.\n");
		exit(0);
	}
	printf("%d! = %d\n", num, fibo(num));

	return 0;
}

int fibo(int num){
	if(num==1)
		return 1;
	return num* fibo(num-1);
}
*/

/***************************************************/
// Ex20. 리턴 만으로 값을 반환하는 것이 아니다       //
// 13.06.25										  //
/***************************************************/
/*
#include <stdio.h>

int DivInt(int a, int b, int* result){
	if(b==0)
		return -256;
	else{
		result[0] = a/b;
		result[1] = a%b;
		return 1;
	}
	
	
}

int main(){
	int a,b;
	int result[2];
	while(true){
		printf("나눔셋 위한 두 정수 입력 : ");
		scanf("%d %d", &a, &b);
		if(1==DivInt(a,b,result)){
			printf("몫 : %d, 나머지 : %d\n", result[0], result[1]);
			break;
		}
		else if(-256==DivInt(a,b,result)){
			printf("%d으로 나누는 오류발생! 숫자 재 입력\n", b);
			continue;
			
		}
	}
		
	return 0;
}
*/

/***************************************************/
// Ex22. 함수와 문자열 배열                        //
// 13.06.25										  //
/***************************************************/
/*
#include <stdio.h>
#define STR_LEN 100

int CharNumOfString(char *str, char token){
	int count = 0;
	for(int i = 0; i < STR_LEN; i++){
		if(str[i]==token)
			count++;
	}
	return count;
}

int main(){
	char input[STR_LEN];
	char token;
	fputs("대상 문자열 입력 : ", stdout);
	gets(input);
	fputs("세어 볼 문자 입력 : ", stdout);
	token = getchar();
	printf("%c의 개수 : %d\n", token, CharNumOfString(input, token));

	return 0;
}

*/

/***************************************************/
// Ex23. 문자열 처리함수 직접 만들어 보기           //
// 13.06.25										  //
/***************************************************/

#include <stdio.h>
#define STR_MAX 100

int strLen(char *str);
int strCpy(char *dest, char *source);

int main(){
	char str1[STR_MAX]="Good morning? ";
	char str2[STR_MAX]="HaHaHa!";
	char buffString[STR_MAX];

	// strLen test
	printf("legnth of \"%s\" : %d \n", str1, strLen(str1));
	printf("legnth of \"%s\" : %d \n", str2, strLen(str2));

	
	// strCpy test
	strCpy(buffString, str1);
	printf("copy string : \"%s\" \n", buffString);
	/*
	// strCat test
	strCat(buffString, str2);
	printf("concat string : \"%s\" \n", buffString);

	// strCmp test
	printf("cmp str1, str1 : %d \n", strCmp(str1, str1));
	printf("cmp str2, str2 : %d \n", strCmp(str2, str2));
	printf("cmp str1, str2 : %d \n", strCmp(str1, str2));
	printf("cmp str2, str1 : %d \n", strCmp(str2, str1));
	*/

	return 0;
}

int strLen(char *str){
	int count = 0;

	while(*str!=0){
		count++;
		*str++;
	}
	return count;

}

int strCpy(char *dest, char *source){
	while(*source!=0){
		*dest++ = *source++;
	}
	*dest='\0';

	return 0;
}