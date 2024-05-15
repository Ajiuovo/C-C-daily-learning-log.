#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//2、输出特性：在被调函数中分配空间，在主调函数中访问
void allocateSpace(int** p)
{
	int* temp = malloc(sizeof(int) * 10);
	for (size_t i = 0; i < 10; i++)
	{
		*(temp + i) = i + 10;
	}
	*p = temp;
}

void printArray(int* p)
{
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", p[i]);
	}
}
void printArray2(int** p)
{
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d ", (*p)[i]);
	}
}
void freeArray(int* p)
{
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

void test03()
{
	int* p = NULL;
	allocateSpace(&p);			//传址才能修改
	//printArray(p);
	printArray2(&p);
	freeArray(p);		//同级指针不能这样释放，得加一行代码"p=NULL"在函数调用之后，或者直接在本函数内释放
	if (p = NULL)
	{
		printf("p成功释放了，是空指针");
	}
	else
	{
		printf("p是野指针");
	}
}
int main(void)
{
	test03();
	return EXIT_SUCCESS;
}