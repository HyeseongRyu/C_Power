/* 130125 */

/*


#include <stdio.h>

int main(){
	int input1, input2;
	int sum = 0;
	int i;
	printf("두 개의 정수 입력 : ");
	scanf("%d %d", &input1, &input2);

	if(input1 < input2) {
		for( i = input1 ; i<= input2; i++){
			if(i%3==0 || i%5==0)
				printf("%d는 합에서 제외.\n", i);
			else
				sum+=i;
		}
		printf("%d과 %d을 포함하여 그 사이에 있는 정수들의 합 : %d\n", input1, input2, sum);
	}
	else{
		for( i = input2 ; i<= input1; i++){
			if(i%3==0 || i%5==0)
				printf("%d는 합에서 제외.\n", i);
			else
				sum+=i;
		}
		printf("%d과 %d을 포함하여 그 사이에 있는 정수들의 합 : %d\n", input2, input1, sum);
	}
	


	return 0;
}

*/
