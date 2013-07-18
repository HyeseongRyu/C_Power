/* Name : phoneFunc.c ver 1.1
 * Content : ��ȭ��ȣ ��Ʈ�� �Լ�
 * Implementation : RHS
 * 
 * Last modified 2013/07/15
 */

#include "common.h"
#include "phoneData.h"
#include "screenOut.h"

#define LIST_NUM 100

int numOfData=0;
phoneData *phoneList[LIST_NUM];

/* ��   �� : void InputPhoneData (void)
 * ��   �� : ��ȭ��ȣ ���� ������ �Է� �޾Ƽ� ����
 * ��   ȯ : void
 *
 */

void InputPhoneData(void){
	phoneData *pPhone;
	int i;
	pPhone = (phoneData*)malloc(sizeof(phoneData));
	
	
	
	printf("�̸� �Է� : " );
	//gets(phoneList[numOfData].name);
	
	gets(pPhone->name);
	fflush(stdin);
	
	printf("��ȭ��ȣ �Է� : ");
	//gets(phoneList[numOfData++].phoneNum);
	gets(pPhone->phoneNum);
	fflush(stdin);
	
	for(i = 0 ; i < numOfData ; i++){
		if(!strcmp(pPhone->name, phoneList[i]->name)){
			if(!strcmp(pPhone->phoneNum, phoneList[i]->phoneNum)){
				printf("�̹� �Էµ� ������ �Դϴ�.\n");
				Sleep(1000);
				free(pPhone);

				return ;
			}
		}
	}
	phoneList[numOfData++] = pPhone;
	//strcpy(phoneList[numOfData]->name , pPhone->name);
	//strcpy(phoneList[numOfData++]->phoneNum , pPhone->phoneNum);
	printf("�Է��� �Ϸ�Ǿ����ϴ�.\n");
	Sleep(1000);
}

/* ��   �� : void ShowAllData (void)
 * ��   �� : ����� ������ ��ü ���
 * ��   ȯ : void
 *
 */

void ShowAllData(void){
	int i = 0;
	for(i = 0; i < numOfData ; i++){
		if(phoneList[i]->name == NULL ){
			continue;
		}
		ShowPhoneInfoByPtr(phoneList[i]);
	}

	printf("����� �Ϸ�Ǿ����ϴ�.\n");
	Sleep(1000);
}

/* ��   �� : void SearchPhoneData (void)
 * ��   �� : ����� ������ �˻�
 * ��   ȯ : void
 *
 */

void SearchPhoneData(){
	char key[NAME_LEN];
	int i=0;
	int success = 0;
	printf("ã�� �̸��� : ");
	gets(key);
	for(i = 0 ; i < numOfData ; i++){
		if(strcmp(phoneList[i]->name, key)==0){
			ShowPhoneInfoByPtr(phoneList[i]);
			success = 1;
			/*
			
			*/
		}
	}
	if(success){ // ã���� ���
		printf("�˻��� �Ϸ�Ǿ����ϴ�.\n");
		Sleep(1000);
		return ;
	}
	else{ // ã�� ������ ���
		printf("�˻��� ���� ���Ͽ����ϴ�. \n");
		Sleep(1000);
		return ;
	}

	
	
}

/* ��   �� : void DeletePhoneData (void)
 * ��   �� : ����� ���� ����
 * ��   ȯ : void
 *
 */

void DeletePhoneData(){
	char key[NAME_LEN];
	int i = 0;
	int j = 0;
	int input;
	int success = 0;
	int count = 0;
	int check[LIST_NUM] = {0};
	printf("ã�� �̸��� : ");
	gets(key);
	for( i = 0 ; i < numOfData ; i++){
		if(strcmp(phoneList[i]->name, key) == 0){
			printf("NUM. %d\n", count+1);
			ShowPhoneInfoByPtr(phoneList[i]);
			check[i] = count+1;
			success = 1;
			count++;
			/*
			//free(phoneList[i]);
			for(  j = i ; j < numOfData-1 ; j++){
				phoneList[j] = phoneList[j+1];
			}
			numOfData--;
			printf("������ �Ϸ�Ǿ����ϴ�.\n");
			Sleep(1000);
			return ;
			*/
		}
	}
	if(success){
		printf("���� : ");
		scanf("%d", &input);
		for(i = 0 ; i < numOfData ; i++){
			if(check[i] == input){
				free(phoneList[i]);
				for(  j = i ; j < numOfData-1 ; j++){
					phoneList[j] = phoneList[j+1];
				}
				numOfData--;
				printf("������ �Ϸ�Ǿ����ϴ�.\n");
				Sleep(1000);
				return ;
			}
		}
	}else {
		printf("�˻��� ���� ���Ͽ����ϴ�. \n");
		Sleep(1000);
		return ;
	}
}

void StoreDataToFile(void){
	int i;
	FILE* fp = fopen("phone.txt", "wt");
	
	for(i = 0 ; i < numOfData ; i++){
		fputs(phoneList[i]->name, fp);
		fputs(phoneList[i]->phoneNum, fp);
	}

	fclose(fp);
	if(fp==NULL){
		printf("������ ���� �Ϸ�\n");
	}

}

void LoadDataFromFile(void){
	FILE* fp = fopen("phone.txt", "rt");
	phoneData * pData = (p
	if(fp==NULL){
		printf("������ ������ �ʾҽ��ϴ�.\n");
	}
	while(!feof(fp)){
		
	}
}