// Testing.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "windows.h"
#include "iostream"
#include "windows.h"
#include <windows.h>

#define MEMSIZE 1

using namespace std;

void main()
{
	void *p = NULL;
	DWORD old;
	p = VirtualAlloc(NULL, MEMSIZE, MEM_RESERVE, PAGE_EXECUTE_READWRITE);
	Sleep(10);

	p = VirtualAlloc(NULL, MEMSIZE, MEM_COMMIT, PAGE_READWRITE);
	Sleep(10);

	VirtualProtect(p, MEMSIZE, PAGE_EXECUTE_READ, &old);
	Sleep(10);
	system("pause");
}