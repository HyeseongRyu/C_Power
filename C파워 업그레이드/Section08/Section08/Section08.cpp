// ����27 : �� �̻��� �����͸� ����� �ϴ� ��Ȳ : ����ü ������� �ʱ� 

/*
#include <stdio.h>
#define STR_LEN 50
#define BOOK_NUM 3



void ReadBookInfo(int index);
void PrintBookInfo(int index);

char bookTitle[BOOK_NUM][STR_LEN];
char bookPub[BOOK_NUM][STR_LEN];
int bookPrice[BOOK_NUM];

int main(){
	//
	 // �������
	 //  - ���� ����
	 //  - ���ǻ� �̸�
	 //  - ���� ����
	//
	printf("****** ���� ���� �Է� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� �Է�
		ReadBookInfo(i);
	}

	printf("****** ���� ���� ��� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� ���
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d ��° ���� ���� �Է�.\n", index+1);
	printf("���� ���� : ");
	gets(bookTitle[index]);
	fflush(stdin);
	printf("���ǻ� �� : ");
	gets(bookPub[index]);
	fflush(stdin);
	printf("���� ���� : ");
	scanf("%d", &bookPrice[index]);
	fflush(stdin);
	printf("%d ��° �Է� �Ϸ�.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d ��° ���� ���� ���.\n", index+1);
	printf("���� ���� : %s\n", bookTitle[index]);
	printf("���ǻ� �� : %s\n", bookPub[index]);
	printf("���� ���� : %d\n\n", bookPrice[index]);

}

*/

// ����28 : �� �̻��� �����͸� ����� �ϴ� ��Ȳ : ����ü ����ϱ�

/*
#include <stdio.h>
#define STR_LEN 50
#define BOOK_NUM 3

typedef struct bookInfo{
	char bookTitle[STR_LEN];
	char bookPub[STR_LEN];
	int bookPrice;
}bookInfo;


void ReadBookInfo(int index);
void PrintBookInfo(int index);

bookInfo book[3];

int main(){
	//
	 // �������
	 //  - ���� ����
	 //  - ���ǻ� �̸�
	 //  - ���� ����
	//
	printf("****** ���� ���� �Է� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� �Է�
		ReadBookInfo(i);
	}

	printf("****** ���� ���� ��� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� ���
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d ��° ���� ���� �Է�.\n", index+1);
	printf("���� ���� : ");
	gets(book[index].bookTitle);
	fflush(stdin);
	printf("���ǻ� �� : ");
	gets(book[index].bookPub);
	fflush(stdin);
	printf("���� ���� : ");
	scanf("%d", &book[index].bookPrice);
	fflush(stdin);
	printf("%d ��° �Է� �Ϸ�.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d ��° ���� ���� ���.\n", index+1);
	printf("���� ���� : %s\n", book[index].bookTitle);
	printf("���ǻ� �� : %s\n", book[index].bookPub);
	printf("���� ���� : %d\n\n", book[index].bookPrice);

}

*/

// ���� 29 : ������ �� ������ ������ �����Ͽ� �����ϱ�
/*
#include <stdio.h>
#include <string.h>
#define STR_LEN 50
#define BOOK_NUM 3

typedef struct bookInfo{
	char bookTitle[STR_LEN];
	char bookPub[STR_LEN];
	int bookPrice;
}bookInfo;


void ReadBookInfo(int index);
void PrintBookInfo(int index);
void BookSort(bookInfo* book);

bookInfo book[BOOK_NUM];

int main(){
	//
	// �������
	//  - ���� ����
	//  - ���ǻ� �̸�
	//  - ���� ����
	//
	printf("****** ���� ���� �Է� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� �Է�
		ReadBookInfo(i);
	}
	BookSort(book);

	printf("****** ���� ���� ��� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� ���
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d ��° ���� ���� �Է�.\n", index+1);
	printf("���� ���� : ");
	gets(book[index].bookTitle);
	fflush(stdin);
	printf("���ǻ� �� : ");
	gets(book[index].bookPub);
	fflush(stdin);
	printf("���� ���� : ");
	scanf("%d", &book[index].bookPrice);
	fflush(stdin);
	printf("%d ��° �Է� �Ϸ�.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d ��° ���� ���� ���.\n", index+1);
	printf("���� ���� : %s\n", book[index].bookTitle);
	printf("���ǻ� �� : %s\n", book[index].bookPub);
	printf("���� ���� : %d\n\n", book[index].bookPrice);

}

void BookSort(bookInfo* book){
	bookInfo temp;
	for(int i = 0 ; i < BOOK_NUM ; i++){
		for(int j = 0 ; j < (BOOK_NUM-i)-1; j++){
			if(0<strcmp(book[j].bookTitle, book[j+1].bookTitle)){
				temp = book[j];
				book[j] = book[j+1];
				book[j+1] = temp;
			}
		}
	}
}
*/

// ���� 30 : �پ��� �������� ���� ���� �����ϱ�


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STR_LEN 50
#define BOOK_NUM 3

typedef struct bookInfo{
	char bookTitle[STR_LEN];
	char bookPub[STR_LEN];
	int bookPrice;
}bookInfo;


void ReadBookInfo(int index);
void PrintBookInfo(int index);
void BookSort_Title(bookInfo* book);
void BookSort_Pub(bookInfo* book);
void BookSort_Price(bookInfo* book);

bookInfo book[BOOK_NUM];

int main(){
	//
	// �������
	//  - ���� ����
	//  - ���ǻ� �̸�
	//  - ���� ����
	//
	int input;
	printf("****** ���� ���� �Է� ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� �Է�
		ReadBookInfo(i);
	}
	//BookSort(book);

	printf("****** ���� ���� ��� ******\n");
	printf("���� ��� ����.....\n");
	printf("1. ���� ���� ��, 2. ���ǻ� ��, 3. ���� ��, 4. ����\n");
	scanf("%d", &input);
	switch(input)
	{
		case 1:
			BookSort_Title(book);
			break;
		case 2:
			BookSort_Pub(book);
			break;
		case 3:
			BookSort_Price(book);
			break;
		case 4:
			printf("���α׷��� �����մϴ�.\n");
			exit(0);
	
	}
	
	for(int i = 0 ; i < BOOK_NUM ; i++){ // ���� ���� ���
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d ��° ���� ���� �Է�.\n", index+1);
	printf("���� ���� : ");
	gets(book[index].bookTitle);
	fflush(stdin);
	printf("���ǻ� �� : ");
	gets(book[index].bookPub);
	fflush(stdin);
	printf("���� ���� : ");
	scanf("%d", &book[index].bookPrice);
	fflush(stdin);
	printf("%d ��° �Է� �Ϸ�.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d ��° ���� ���� ���.\n", index+1);
	printf("���� ���� : %s\n", book[index].bookTitle);
	printf("���ǻ� �� : %s\n", book[index].bookPub);
	printf("���� ���� : %d\n\n", book[index].bookPrice);

}

void BookSort_Title(bookInfo* book){
	bookInfo temp;
	for(int i = 0 ; i < BOOK_NUM ; i++){
		for(int j = 0 ; j < (BOOK_NUM-i)-1; j++){
			if(0<strcmp(book[j].bookTitle, book[j+1].bookTitle)){
				temp = book[j];
				book[j] = book[j+1];
				book[j+1] = temp;
			}
		}
	}
}

void BookSort_Pub(bookInfo* book){
	bookInfo temp;
	for(int i = 0 ; i < BOOK_NUM ; i++){
		for(int j = 0 ; j < (BOOK_NUM-i)-1; j++){
			if(0<strcmp(book[j].bookPub, book[j+1].bookPub)){
				temp = book[j];
				book[j] = book[j+1];
				book[j+1] = temp;
			}
		}
	}
}
void BookSort_Price(bookInfo* book){
	bookInfo temp;
	for(int i = 0 ; i < BOOK_NUM ; i++){
		for(int j = 0 ; j < (BOOK_NUM-i)-1; j++){
			if(book[j].bookPrice > book[j+1].bookPrice){
				temp = book[j];
				book[j] = book[j+1];
				book[j+1] = temp;
			}
		}
	}
}