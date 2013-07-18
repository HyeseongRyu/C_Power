/*************************************************/
//  Ex2. 문자열을 입력 받는 두 가지 방법의 차이점  //
//  2013.06.24									//
/*************************************************/

/*
#include <stdio.h>
#define STR_LEN 100

int main(){
	char input[STR_LEN];

	fputs("문자열 입력 : ", stdout);
	gets(input);

	fputs("입력된 문자열 : ", stdout);
	//fputs(input, stdout);
	puts(input);

	return 0;

}

*/

/****************************************************/
//  Ex3. 숫자를 읽어 들이려는데 16진수로 읽고 싶다면  //
//  2013.06.24									   //
/***************************************************/

/*
#include <stdio.h>

int main(){
	int a, b;
	int sum = 0;
	printf("두 수를 16진수로 입력 : ");
	scanf("%x %x", &a, &b);
	sum = a + b;
	printf("연산 결과 8진수 : %o\n", sum);
	printf("연산 결과 10진수 : %d\n", sum);
	printf("연산 결과 16진수 : %x\n", sum);



	return 0;
}

*/

/****************************************************************/
//  Ex4-1. 파일의 끝을 의마하는 EOF가 콘솔에서는 어떠한 의미를?   //
//  2013.06.24									               //
/***************************************************************/
/*

#include <stdio.h>

int main(){
	
	char input;
	int count = 0;
	while(true){
		printf("Data input (Ctrl+Z to exit) : ");
		input=getchar();
		fflush(stdin);
		if(input==EOF){
			break;
		}
		count++;
		
	}
	printf("입력된 문자의 수 : %d\n", count);

	
	return 0;

}
*/

/****************************************************************/
//  Ex4-2. 파일의 끝을 의마하는 EOF가 콘솔에서는 어떠한 의미를?   //
//  2013.06.24									               //
/***************************************************************/

#include <stdio.h>

int main(){

	int input;
	int ret;
	int sum = 0;
	while(true){
		printf("Data input (Ctrl+Z to exit) : ");
		ret = scanf("%d", &input);
		
		fflush(stdin);
		if(ret==EOF)
			break;
		sum+=(int)input;
		
	}
	printf("총합 : %d\n", sum);

	return 0;
}
