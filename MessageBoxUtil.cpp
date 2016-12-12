#include <tchar.h>
#include "MessageBoxUtil.h"


bool ChkMessageWindow(HWND hWnd, TCHAR* msg, TCHAR* title)
{
	int ret = MessageBox(hWnd, msg, title, MB_ICONWARNING | MB_YESNO);
	return ret == IDYES ?  true: false;
}