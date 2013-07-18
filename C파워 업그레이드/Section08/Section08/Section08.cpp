// 문제27 : 둘 이상의 데이터를 묶어야 하는 상황 : 구조체 사용하지 않기 

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
	 // 도석목록
	 //  - 도서 제목
	 //  - 출판사 이름
	 //  - 가격 정보
	//
	printf("****** 도서 정보 입력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 입력
		ReadBookInfo(i);
	}

	printf("****** 도서 정보 출력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 출력
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d 번째 도서 정보 입력.\n", index+1);
	printf("도서 제목 : ");
	gets(bookTitle[index]);
	fflush(stdin);
	printf("출판사 명 : ");
	gets(bookPub[index]);
	fflush(stdin);
	printf("도서 가격 : ");
	scanf("%d", &bookPrice[index]);
	fflush(stdin);
	printf("%d 번째 입력 완료.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d 번째 도서 정보 출력.\n", index+1);
	printf("도서 제목 : %s\n", bookTitle[index]);
	printf("출판사 명 : %s\n", bookPub[index]);
	printf("도서 가격 : %d\n\n", bookPrice[index]);

}

*/

// 문제28 : 둘 이상의 데이터를 묶어야 하는 상황 : 구조체 사용하기

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
	 // 도석목록
	 //  - 도서 제목
	 //  - 출판사 이름
	 //  - 가격 정보
	//
	printf("****** 도서 정보 입력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 입력
		ReadBookInfo(i);
	}

	printf("****** 도서 정보 출력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 출력
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d 번째 도서 정보 입력.\n", index+1);
	printf("도서 제목 : ");
	gets(book[index].bookTitle);
	fflush(stdin);
	printf("출판사 명 : ");
	gets(book[index].bookPub);
	fflush(stdin);
	printf("도서 가격 : ");
	scanf("%d", &book[index].bookPrice);
	fflush(stdin);
	printf("%d 번째 입력 완료.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d 번째 도서 정보 출력.\n", index+1);
	printf("도서 제목 : %s\n", book[index].bookTitle);
	printf("출판사 명 : %s\n", book[index].bookPub);
	printf("도서 가격 : %d\n\n", book[index].bookPrice);

}

*/

// 문제 29 : 저장할 때 도서명 순으로 정렬하여 저장하기
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
	// 도석목록
	//  - 도서 제목
	//  - 출판사 이름
	//  - 가격 정보
	//
	printf("****** 도서 정보 입력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 입력
		ReadBookInfo(i);
	}
	BookSort(book);

	printf("****** 도서 정보 출력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 출력
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d 번째 도서 정보 입력.\n", index+1);
	printf("도서 제목 : ");
	gets(book[index].bookTitle);
	fflush(stdin);
	printf("출판사 명 : ");
	gets(book[index].bookPub);
	fflush(stdin);
	printf("도서 가격 : ");
	scanf("%d", &book[index].bookPrice);
	fflush(stdin);
	printf("%d 번째 입력 완료.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d 번째 도서 정보 출력.\n", index+1);
	printf("도서 제목 : %s\n", book[index].bookTitle);
	printf("출판사 명 : %s\n", book[index].bookPub);
	printf("도서 가격 : %d\n\n", book[index].bookPrice);

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

// 문제 30 : 다양한 기준으로 도서 정보 정렬하기


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
	// 도석목록
	//  - 도서 제목
	//  - 출판사 이름
	//  - 가격 정보
	//
	int input;
	printf("****** 도서 정보 입력 ******\n");
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 입력
		ReadBookInfo(i);
	}
	//BookSort(book);

	printf("****** 도서 정보 출력 ******\n");
	printf("정렬 방식 선택.....\n");
	printf("1. 도서 제목 순, 2. 출판사 순, 3. 가격 순, 4. 종료\n");
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
			printf("프로그램을 종료합니다.\n");
			exit(0);
	
	}
	
	for(int i = 0 ; i < BOOK_NUM ; i++){ // 도서 정보 출력
		PrintBookInfo(i);
	}

	return 0;
}

void ReadBookInfo(int index){
	printf("%d 번째 도서 정보 입력.\n", index+1);
	printf("도서 제목 : ");
	gets(book[index].bookTitle);
	fflush(stdin);
	printf("출판사 명 : ");
	gets(book[index].bookPub);
	fflush(stdin);
	printf("도서 가격 : ");
	scanf("%d", &book[index].bookPrice);
	fflush(stdin);
	printf("%d 번째 입력 완료.\n\n", index+1);
}

void PrintBookInfo(int index){
	printf("%d 번째 도서 정보 출력.\n", index+1);
	printf("도서 제목 : %s\n", book[index].bookTitle);
	printf("출판사 명 : %s\n", book[index].bookPub);
	printf("도서 가격 : %d\n\n", book[index].bookPrice);

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