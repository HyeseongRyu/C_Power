/*
#include <stdio.h>
#include <stdlib.h>

void SortArr(int * arr, int num);
void ReadAndSortPrint(int number);

int main(){
	int num;
	fputs("�Է��� ������ ���� : ", stdout);
	scanf("%d", &num);

	ReadAndSortPrint(num);
	return 0;

}

void SortArr(int *arr, int num){
	int i, j, temp;
	for(i = 0 ; i < num-1 ; i++){
		for(j= 0; j <(num-i)-1; j++){
			if(arr[j] > arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
void ReadAndSortPrint(int number){
	int *arr = (int*)malloc(sizeof(int)*number);

	int i;
	for(i=0; i<number ;i++){
		printf("%d ��° �Է� : ", i+1);
		scanf("%d", &arr[i]);
	}

	SortArr(arr, number);

	puts("�Էµ� ������ ���ĵ� ���");
	for(i=0 ; i<number;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
}

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define EXT_SIZE 5

int ExtendMemForString(char **pStr, int strLen);

int main(){
	int strLen = 5;
	char * str = (char*) malloc(sizeof(char)*strLen);

	strcpy(str, "Best");
	puts(str);

	strLen=ExtendMemForString(&str, strLen);
	printf("Ȯ��� ���ڿ� ���� : %d \n", strLen);
	strcat(str, " guy!");
	puts(str);

	return 0;
}

int ExtendMemForString(char **pStr, int strLen){
	int i;
	char *newStrPtr;

	newStrPtr=(char*)malloc(sizeof(char)*(strLen+EXT_SIZE));
	if(newStrPtr=NULL)
		return -1;
	for(i=0; i<strLen ; i++)
		newStrPtr[i] = (*pStr)[i];

	free(*pStr);
	*pStr = newStrPtr;
	return strLen+EXT_SIZE;
}