#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1、输入特性：在主调函数中分配空间，在被调函数中访问
void showArray(int** pArray)
{
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ",*pArray[i]);
	}
}
void test01()
{
	//创建在堆区的二级指针
	int** pArray = malloc(sizeof(int*) * 5);
	int a1 = 10;
	int a2 = 20;
	int a3 = 30;
	int a4 = 40;
	int a5 = 50;
	pArray[0] = &a1;
	pArray[1] = &a2;
	pArray[2] = &a3;
	pArray[3] = &a4;
	pArray[4] = &a5;
	showArray(pArray);
	//不需要，因为只需要释放堆区数据，这里只是存放了地址，而不是指针开辟的堆空间
	/*for (size_t i = 0; i < 5; i++)
	{
		if (pArray[i] != NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}*/
	//释放堆区数据
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}
}


void test02()
{
	//创建在栈区的一级指针
	int* pArray[5];
	for (size_t i = 0; i < 5; i++)
	{
		pArray[i] = malloc(sizeof(int));
		*(pArray[i]) = 10 + i;
	}
	showArray(pArray);			//同样可以用，因为数组名会被退化为地址，pArray[0]也存放一个指针，相当于原来的二级指针
	//释放堆区
	for (size_t i = 0; i < 5; i++)
	{
		if (pArray[i] != NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}
}
int main0401(void)
{
	test01();
	test02();
	return EXIT_SUCCESS;
}