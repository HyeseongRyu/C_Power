/* Name : main.c ver 1.0
 * Content : ���� ANSI ǥ�� ���
 * Implementation : RHS
 * 
 * Last modified 2013/07/15
 */

#include "common.h"
#include "screenOut.h"
#include "phoneFunc.h"



/* ��   �� : int main (void)
 * ��   �� : ����� ���� ó��
 * ��   ȯ : ���� ���� �� 0
 *
 */
enum {INPUT_=1, SHOWALL, SEARCH, DELETE_, QUIT};

int main(){
	int inputMenu = 0;
	
	while(1){
		ShowMenu();
		fputs("�����ϼ��� : ", stdout);
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
			puts("�̿��� �ּż� ������~");
			break;
		}

	}

	return 0;
}
