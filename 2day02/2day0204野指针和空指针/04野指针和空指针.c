#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1、不能向NULL或者非法内存拷贝数据
void test01()
{
	/*char* p = NULL;
	strcpy(p, "111");			//err
	char* q = 0x1122;
	strcpy(q, "wrda");			//err
	*/
}

//③变量超越作用域
int* doWork()
{
	int a = 10;
	int* p = &a;
	printf("%d\n",*p);
	return p;
}


//2、野指针出现情况
void test02()
{
	////①指针变量未初始化
	//int* p;
	//printf("%d\n", *p);
	////②指针释放后未置空
	//char* str = malloc(100);
	//free(str);
	////记住释放后置空，防止野指针出现；
	//str = NULL;
	//free(str);		//野指针不可以重复释放，空指针可以
}
int main(void)
{

	//test01();
	//test02();
	int* a = doWork();
	printf("%d\n", *a);
	printf("%d\n", *a);
	return EXIT_SUCCESS;
}