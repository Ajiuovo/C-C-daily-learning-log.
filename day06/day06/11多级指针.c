#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main11(void)
{
	int a = 10;
	int* p = &a;
	int** pp = &p;			//����ָ��
	int*** ppp = &pp;		//����ָ��:�༶ָ�벻����Լ����
	printf("%p\n",*ppp);
	printf("%p\n", pp);
	printf("%p\n", &p);
	printf("%p\n", **ppp);
	printf("%p\n", *pp);
	printf("%p\n", p);
	printf("%p\n", &a);
	printf("%p\n", ***ppp);
	printf("%p\n", **pp);
	printf("%p\n", *p);
	printf("%p\n", a);

	return EXIT_SUCCESS;
}