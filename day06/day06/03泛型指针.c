#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main03(void)
{
	int a = 345;
	char c = 'a';
	void* p;
	//p = &a;
	p = &c;
	//printf("%d\n", *((int*)p));
	printf("%c\n", *((char*)p));		//可以接受任意一种变量地址，但使用时必须先强制转换为具体数据类型
	return EXIT_SUCCESS;
}