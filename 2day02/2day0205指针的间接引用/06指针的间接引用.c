#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//间接赋值三条件
//两个变量：一普通变量、一指针变量；或者一实参、一形参
//变量间建立关系
//解引用操作
void test01()
{
	int a = 10;
	int* p = NULL;
	p=&a;
	printf("%d\n", *p);
}
//形参方式利用指针间接赋值
void changeValue(int* p)
{
	*p = 2000;
}
void test02()
{
	int a2 = 20;
	changeValue(&a2);
	printf("%d\n", a2);
	printf("%d\n", &a2);		//每次都不一样，但qt中每次都会一样
}


int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}