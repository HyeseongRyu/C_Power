/* 130125 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	int input, i;
	int sum = 0;

	printf("2�̻� �Է� : ");
	scanf("%d", &input);
	if(input < 2){
		printf("2�̻� �Է��ϼ���\n");
		exit(1);
	}
	for(i = 1 ; i <= input ; i++){
		sum+=i;
		if(sum >= 20)
			break;
	}
	printf("%d�� ���� �� ó�� %d�� �ѱ� �����Ѵ�.\n", i, input);
	printf("%d�� �ѱ� ������ �� : %d\n",input, sum-i);
	printf("%d�� ���� ������ �� : %d\n", input, sum);

	return 0;
}