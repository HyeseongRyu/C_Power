/* Name : screenOut.c ver 1.0
 * Content : ���� ANSI ǥ�� ���
 * Implementation : RHS
 * 
 * Last modified 2013/07/15
 */

#include "common.h"
#include "phoneData.h"

/* ��   �� : void ShowMenu (void)
 * ��   �� : ������ ���� �޴� ���
 * ��   ȯ : void
 *
 */

void ShowMenu(){
	system("cls");
	
	printf("�������������� ��   �� �������������� \n");
	printf(" 1. ��ȭ ��ȣ �Է� \n");
	printf(" 2. ��ü ���� ��� \n");
	printf(" 3. ��ȭ ��ȣ �˻� \n");
	printf(" 4. ��ȭ ��ȣ ���� \n");
	printf(" 5. ���� \n");
	printf("�������������������������������������� \n");
	printf("����> ");

}

/* ��   �� : void ShowPhoneInfo (phoneData phone) 
 * ��   �� : �̸��� ��ȭ��ȣ ���� ���
 * ��   ȯ : void
 *
 */

void ShowPhoneInfo(phoneData phone){
	printf("�������������������������������� \n");
	printf("�� �� �̸� : %s \n", phone.name);
	printf("�� �� ��ȭ��ȣ : %s \n", phone.phoneNum);
	printf("�������������������������������� \n\n");

}

/* ��   �� : void ShowPhoneInfoByPtr (phoneData *pPhone) 
 * ��   �� : �̸��� ��ȭ��ȣ ���� ���
 * ��   ȯ : void
 *
 */

void ShowPhoneInfoByPtr(phoneData *pPhone){
	printf("�������������������������������� \n");
	printf("�� �� �̸� : %s \n", pPhone->name);
	printf("�� �� ��ȭ��ȣ : %s \n", pPhone->phoneNum);
	printf("�������������������������������� \n\n");

}