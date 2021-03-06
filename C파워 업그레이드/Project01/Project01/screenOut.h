/* Name : screenOut.h ver 1.0
 * Content : 콘솔 출력을 위한 함수 선언
 * Implementation : RHS
 * 
 * Last modified 2013/07/15
 */

#ifndef __SCREENOUT_H__
#define __SCREENOUT_H__

#include "phoneData.h"

void ShowMenu(void);
void ShowPhoneInfo(phoneData phone);
void ShowPhoneInfoByPtr(phoneData *pPhone);

#endif