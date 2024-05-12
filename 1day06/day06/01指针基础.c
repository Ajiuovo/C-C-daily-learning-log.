#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main01(void)
{
	int a = 10;
	int* p = &a;	//int*  是一种类型，代表整型指针，p是变量名
	*p = 2000;		//*p代表取出p变量中的内容，当作地址看待，并找到对应内存空间
					//*p如果做左值，代表存数据到内存空间，*p如果做右值，代表取出空间中内容
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", a);
	a = 350;
	printf("%d\n", *p);		//这里的*p是右值
	return EXIT_SUCCESS;
}