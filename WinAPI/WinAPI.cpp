#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	system("chcp 1251>nul");
	int message = MessageBox(NULL, L"Привет", L"Мир", MB_YESNOCANCEL);
	switch (message) {
	case IDYES:{
		MessageBox(NULL, L"Вы нажали кнопку Да", L"Мир", NULL);
			break;
	}
	case IDNO: {
		MessageBox(NULL, L"Вы нажали кнопку Нет", L"Мир", NULL);
			break;
	}
	case IDCANCEL: {
		MessageBox(NULL, L"Вы нажали кнопку Отмена", L"Мир", NULL);
		break;
	}
	}
	return 0;
}