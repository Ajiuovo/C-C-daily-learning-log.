#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int m=30;		//全局变量，程序结束时才回收空间
int* func(int a, int b);
int main(void)
{
	int* p=NULL;
	int a = 1;
	int b = 2;
	p = func(a, b);
	printf("%d\n", *p);
	return EXIT_SUCCESS;
}

int* func(int a, int b)
{
	int ret = a > b ? 1 : 2;		//指针做函数返回值，不能返回局部变量的地址。
	//return &ret;
	return &m;
}
