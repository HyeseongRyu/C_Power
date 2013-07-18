/* 130125 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	int input, i;
	int sum = 0;

	printf("2이상 입력 : ");
	scanf("%d", &input);
	if(input < 2){
		printf("2이상 입력하세요\n");
		exit(1);
	}
	for(i = 1 ; i <= input ; i++){
		sum+=i;
		if(sum >= 20)
			break;
	}
	printf("%d를 더할 때 처음 %d를 넘기 시작한다.\n", i, input);
	printf("%d를 넘기 이전의 합 : %d\n",input, sum-i);
	printf("%d를 넘은 이후의 합 : %d\n", input, sum);

	return 0;
}