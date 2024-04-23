#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void)
{
	int a = 10;
	int* p = &a;
	int** pp = &p;			//二级指针
	int*** ppp = &pp;		//三级指针:多级指针不能条约定义
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