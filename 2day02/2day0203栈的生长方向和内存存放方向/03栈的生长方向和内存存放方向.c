#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//1、栈的生长方向		高地址->低地址
void test01()
{
	int a = 10;
	int b = 20;
	printf("%p\n", &a);		//差值为12，是因为vs中还要使用指针保存上下文  4+4+4=12
	printf("%p\n", &b);
}
//2、内存存放方向
void test02()
{
	int a = 0x11223344;
	char* p = &a;
	printf("%x\n", *p);		//44 低位字节数据   低地址			（小端对齐）
	printf("%x\n", *(p+1));		//33  高位字节数据	高地址
}

int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}