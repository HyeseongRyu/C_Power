/*************************************************/
//  Ex2. ���ڿ��� �Է� �޴� �� ���� ����� ������  //
//  2013.06.24									//
/*************************************************/

/*
#include <stdio.h>
#define STR_LEN 100

int main(){
	char input[STR_LEN];

	fputs("���ڿ� �Է� : ", stdout);
	gets(input);

	fputs("�Էµ� ���ڿ� : ", stdout);
	//fputs(input, stdout);
	puts(input);

	return 0;

}

*/

/****************************************************/
//  Ex3. ���ڸ� �о� ���̷��µ� 16������ �а� �ʹٸ�  //
//  2013.06.24									   //
/***************************************************/

/*
#include <stdio.h>

int main(){
	int a, b;
	int sum = 0;
	printf("�� ���� 16������ �Է� : ");
	scanf("%x %x", &a, &b);
	sum = a + b;
	printf("���� ��� 8���� : %o\n", sum);
	printf("���� ��� 10���� : %d\n", sum);
	printf("���� ��� 16���� : %x\n", sum);



	return 0;
}

*/

/****************************************************************/
//  Ex4-1. ������ ���� �Ǹ��ϴ� EOF�� �ֿܼ����� ��� �ǹ̸�?   //
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
	printf("�Էµ� ������ �� : %d\n", count);

	
	return 0;

}
*/

/****************************************************************/
//  Ex4-2. ������ ���� �Ǹ��ϴ� EOF�� �ֿܼ����� ��� �ǹ̸�?   //
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
	printf("���� : %d\n", sum);

	return 0;
}
