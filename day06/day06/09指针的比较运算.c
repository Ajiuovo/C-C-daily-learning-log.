#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main0901(void)
{
	int a[10] = { 0 };
	int* p = &a[2];
	if (p > a)
		printf(">");
	else
	{
		printf("<=");
	}
	return EXIT_SUCCESS;
}

int main0902(void)
{
	int a[10] = { 1 };
	int* p = NULL;
	//printf("%d", *p);		0-255为操作系统空间，空指针无法输出内容
	if (p !=NULL)
		printf("P!=NULL");
	else
	{
		p = a;
		printf("%d", *p);
	}
	return EXIT_SUCCESS;
}