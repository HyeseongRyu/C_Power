/* 130128 */

#include <stdio.h>

int main(){
	int array[5];

	for(int i = 0 ; i < 5 ; i++){
		printf("���� %d �Է� : ", i+1);
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
	printf("���ĵ� ��� : ");
	for(int i = 0 ; i < 5 ; i++){
		printf("%d ", array[i]);
	}
	return 0;
}