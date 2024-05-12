#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
int main09(void)
{
	for (int i=0;i<24;i++) {
		for (int j = 0;j<60;j++) {
			for (int k = 0;k < 60;k++) {
				printf("%02d:%02d:%02d", i, j, k);
				Sleep(1000);  //ÐÝÃßÒ»Ãë
				system("cls");
			}
		}
	}
	return 0;
}