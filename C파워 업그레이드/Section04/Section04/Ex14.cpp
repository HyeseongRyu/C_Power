/* 130128 */

#include <stdio.h>

int main(){
	int array[5];

	for(int i = 0 ; i < 5 ; i++){
		printf("숫자 %d 입력 : ", i+1);
		scanf("%d", &array[i]);
	}
	for(int i = 0 ; i < 4 ; i++){
		for(int j = i+1 ; j < 5 ; j++){
			if(array[i] > array[j] ){
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("정렬된 출력 : ");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d ", array[i]);
	}
	return 0;
}