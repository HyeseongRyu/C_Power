/* Name : main.c ver 1.0
 * Content : 공통 ANSI 표준 헤더
 * Implementation : RHS
 * 
 * Last modified 2013/07/15
 */

#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"



/* 함   수 : int main (void)
 * 기   능 : 사용자 선택 처리
 * 반   환 : 정상 종료 시 0
 *
 */
enum {INPUT_=1, SHOWALL, SEARCH, DELETE_, QUIT};

int main(){
	int inputMenu = 0;
	
	while(1){
		ShowMenu();
		fputs("선택하세요 : ", stdout);
		scanf("%d", &inputMenu);
		fflush(stdin);

		switch(inputMenu){
		case INPUT_:
				InputPhoneData();
				break;
		case SHOWALL:
				ShowAllData();
				break;
		case SEARCH :
				SearchPhoneData();
				break;
		case DELETE_ :
				DeletePhoneData();
				break;
		}
		if(inputMenu==QUIT){
			puts("이용해 주셔서 고마워요~");
			break;
		}

	}

	return 0;
}
