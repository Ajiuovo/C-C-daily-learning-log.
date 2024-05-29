#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//数组指针的定义方式
//1、先定义普通数组变量，再通过数组变量类型定义数组指针
void test01()
{
	typedef int(ARRAY_TYPE)[5];			//typedef重定义名称的另一种用法，ARRAY_TYPE此后就代表包含5个元素的int数组，称为数组变量
	ARRAY_TYPE arr2;
	for (size_t i = 0; i < 5; i++)
	{
		arr2[i] = 10 + i;
	}
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", arr2[i]);
	}
	ARRAY_TYPE* p = &arr2;
	//*p = *& arr2  = arr2
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", (*p)[i]);
		printf("%d\n", *p+i);
	}
}

//2、定义指针型数组变量类型，直接赋地址即可
void test02()
{
	int arr[5] = { 1,2,3,4,5 };
	typedef int(*ARRAY_TYPE)[5];
	ARRAY_TYPE arrP = &arr;
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n",(*arrP)[i]); 
		printf("%d\n",*(*arrP+i));		//其实就相当于一个二级指针
	}

}


//3、直接定义数组指针变量
void test03()
{
	int arr[5] = { 1,2,3,4,5 };
	int(* p)[5] = &arr;
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", *((*p) + i));
	}
}

int main(void)
{
	//test01();
	//test02();
	test03();


	return EXIT_SUCCESS;
}