/* 130128 */
/*
#include <stdio.h>

int main(){
	int num, ret, i;

	while(1){
		fputs("1 이상의 정수 입력 : ", stdout);
		ret = scanf("%d", &num);

		if(ret==EOF)
			break;
		else if(num <1)
			puts("1 이상의 입력을 필요로 합니다. 다시 입력하세요. \n");
		else
		{
			printf("%d의 약수들 \n", num);
			for(i = 1 ; i<=num ;i++){
				if(num%i==0)
					printf("%d ", i);
			}
			printf("\n\n");
		}
	}
	puts("EOF 입력에 의해 프로그램을 종료합니다.\n");

}
*/