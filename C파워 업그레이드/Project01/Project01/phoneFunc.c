/* Name : phoneFunc.c ver 1.1
 * Content : 전화번호 컨트롤 함수
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

/* 함   수 : void InputPhoneData (void)
 * 기   능 : 전화번호 관련 데이터 입력 받아서 저장
 * 반   환 : void
 *
 */

void InputPhoneData(void){
	phoneData *pPhone;
	int i;
	pPhone = (phoneData*)malloc(sizeof(phoneData));
	
	
	
	printf("이름 입력 : " );
	//gets(phoneList[numOfData].name);
	
	gets(pPhone->name);
	fflush(stdin);
	
	printf("전화번호 입력 : ");
	//gets(phoneList[numOfData++].phoneNum);
	gets(pPhone->phoneNum);
	fflush(stdin);
	
	for(i = 0 ; i < numOfData ; i++){
		if(!strcmp(pPhone->name, phoneList[i]->name)){
			if(!strcmp(pPhone->phoneNum, phoneList[i]->phoneNum)){
				printf("이미 입력된 데이터 입니다.\n");
				Sleep(1000);
				free(pPhone);

				return ;
			}
		}
	}
	phoneList[numOfData++] = pPhone;
	//strcpy(phoneList[numOfData]->name , pPhone->name);
	//strcpy(phoneList[numOfData++]->phoneNum , pPhone->phoneNum);
	printf("입력이 완료되었습니다.\n");
	Sleep(1000);
}

/* 함   수 : void ShowAllData (void)
 * 기   능 : 저장된 데이터 전체 출력
 * 반   환 : void
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

	printf("출력이 완료되었습니다.\n");
	Sleep(1000);
}

/* 함   수 : void SearchPhoneData (void)
 * 기   능 : 저장된 데이터 검색
 * 반   환 : void
 *
 */

void SearchPhoneData(){
	char key[NAME_LEN];
	int i=0;
	int success = 0;
	printf("찾는 이름은 : ");
	gets(key);
	for(i = 0 ; i < numOfData ; i++){
		if(strcmp(phoneList[i]->name, key)==0){
			ShowPhoneInfoByPtr(phoneList[i]);
			success = 1;
			/*
			
			*/
		}
	}
	if(success){ // 찾았을 경우
		printf("검색이 완료되었습니다.\n");
		Sleep(1000);
		return ;
	}
	else{ // 찾지 못했을 경우
		printf("검색을 하지 못하였습니다. \n");
		Sleep(1000);
		return ;
	}

	
	
}

/* 함   수 : void DeletePhoneData (void)
 * 기   능 : 저장된 정보 삭제
 * 반   환 : void
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
	printf("찾는 이름은 : ");
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
			printf("삭제가 완료되었습니다.\n");
			Sleep(1000);
			return ;
			*/
		}
	}
	if(success){
		printf("선택 : ");
		scanf("%d", &input);
		for(i = 0 ; i < numOfData ; i++){
			if(check[i] == input){
				free(phoneList[i]);
				for(  j = i ; j < numOfData-1 ; j++){
					phoneList[j] = phoneList[j+1];
				}
				numOfData--;
				printf("삭제가 완료되었습니다.\n");
				Sleep(1000);
				return ;
			}
		}
	}else {
		printf("검색을 하지 못하였습니다. \n");
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
		printf("파일의 저장 완료\n");
	}

}

void LoadDataFromFile(void){
	FILE* fp = fopen("phone.txt", "rt");
	phoneData * pData = (p
	if(fp==NULL){
		printf("파일이 열리지 않았습니다.\n");
	}
	while(!feof(fp)){
		
	}
}