#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main0501(void)
{
	const int a=10;
	int* p;
	p = &a;
	*p = 650;
	printf("%d", *p);
	return EXIT_SUCCESS;
	//定义常量还是要用宏定义，用const还是有被篡改的可能
}

//const修饰指针-1
int main0502(void)
{
	int a = 10;
	int b = 50;
	//const放最前可以修改p变量的值，但不能修改*p的值
	const int* p = &a;
	//*p = 500;		//报错
	p = &b;
	return EXIT_SUCCESS;
}

//const修饰指针-2
int main0503(void)
{
	int a = 10;
	int b = 50;
	//const放*p前可以修改p变量的值，但不能修改*p的值
	int const * p = &a;
	//*p = 500;		//报错
	p = &b;
	return EXIT_SUCCESS;
}

//const修饰指针-3
int main0504(void)
{
	int a = 10;
	//const放p前不可以修改p变量的值，但可以修改*p的值
	int* const p = &a;
	*p = 500;
	//p = 2000;		//报错
	return EXIT_SUCCESS;
}

//const修饰指针-4
int main0505(void)
{
	int a = 10;
	//const放p前不可以修改p变量的值，也不可以修改*p的值
	const int* const p = &a;
	//*p = 500;		//报错
	//p = 2000;		//报错
	return EXIT_SUCCESS;
}

//总结，const向右修饰一个部分，修饰部分变为只读；
//常用在函数形参内，表示对应部分为只读内存空间，如fputs(const char *str)，加强程序健壮性。

