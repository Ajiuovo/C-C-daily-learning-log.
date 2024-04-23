#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main0601(void)
{
	int a = 0x12425622;
	int* p = &a;
	char* q = &a;
	printf("%p\n", p);			//地址
	printf("%p\n", *p);			//地址格式的a值
	printf("%x\n", *p);			//a值
	printf("%c\n", *q);			//ascii码22对应的字符
	printf("%x\n", *q);			//22

	//指针的类型并不能决定指针本身的大小，sizeof(p)==sizeof(q)
	//指针类型决定了从指针所存放的内存空间地址往后要读取的字节数，char向后读一个字节，int向后读4个字节

	return EXIT_SUCCESS;
}

int main0602(void)
{
	int a = 0x12425622;
	int* p = &a;
	printf("%p\n", p);			//地址
	printf("%p\n", p+1);			//向后读4个字节
	return EXIT_SUCCESS;
}