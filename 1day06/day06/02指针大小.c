#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main02(void)
{
	printf("sizeof(int *)=%llu\n", sizeof(int *));		//指针大小与类型无关，只与当前使用的平台架构有关
	printf("sizeof(double *)=%llu\n", sizeof(double *));
	printf("sizeof(char *)=%llu\n", sizeof(char *));
	printf("sizeof(void *)=%llu\n", sizeof(void *));		//泛型指针
	//野指针情况1
	//int* p;
	//野指针情况2
	int* p=10;				//0-255默认留给操作系统；其他空间也有可能造成地址冲突，因此不可以这样直接指定空间地址
	*p = 2000;
	printf("%p\n",p);			//野指针（没有一个有效的地址空间地址的指针/p变量有一个值，但该值不是可访问的内存空间），不允许使用
	printf("%d\n", *p);				//杜绝野指针
	return EXIT_SUCCESS;
}