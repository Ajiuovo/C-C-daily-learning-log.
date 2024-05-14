#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1.void无类型。不能创建void类型的数据，对于无类型，该如何分配内存空间？因此不可以
void test01()
{
	//void a = 10;	//不可以
}

//2、用途1：限定函数返回值，限定函数参数
void test02(void)
{
	return 10;
}
//void *万能指针
void test03()
{
	printf("size of void *=%d\n", sizeof(void*));
	int* pInt = NULL;
	char* pChar = NULL;
	void* p = NULL;
	pChar = (char*)pInt;	//不同类型指针必须强转赋值
	p = pChar;	//万能指针可以不用强转

}

int main(void)
{
	test02(10);		//C语言没那么严格的不让执行，但会报warning
	test03();
	return EXIT_SUCCESS;
}


