/* Name : phoneFunc.h ver 1.0
 * Content : ��ȭ��ȣ ��Ʈ�� �Լ����� ����
 * Implementation : RHS
 * 
 * Last modified 2013/07/15
 */

#ifndef __PHONEFUNC_H__
#define __PHONEFUNC_H__

#include "phoneData.h"

void InputPhoneData();
void ShowAllData();
void SearchPhoneData();
void DeletePhoneData();
void StoreDataToFile(void);
void LoadDataFromFile(void);

#endif