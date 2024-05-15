#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void test01()
{
	//int* p = malloc(sizeof(int)*10);
	int* p = calloc(10,sizeof(int));		//calloc与malloc的不同点：会初始化数据为0；参数个数不同，将原来的一分为二。
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", *(p + i));
	}
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}

//realloc重新分配内存：realloc(p,sizeof(int)*10);   将p指针原有空间上扩展/减少空间到10个int大小
void test02()
{
	int* p = calloc(10, sizeof(int));
	printf("%d\n", p);	
	for (size_t i = 0; i < 10; i++)
	{
		*(p + i) = i + 100;
	}
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d\n", p[i]);
	}
	printf("%d\n", p);


	p = realloc(p, sizeof(int) * 12);		//如果原空间后续空间足够，就直接在原空间末尾开，如果不够，就另找一块，复制原来的过去，并开辟。
	printf("%d\n", p);
	for (size_t i = 0; i < 12; i++)
	{
		printf("%d\n", p[i]);			//扩展的话不会初始化新空间
	}
	p = realloc(p, sizeof(int) * 5);
	printf("%d\n", p);
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);			//减少的话，则释放后序空间，释放后无法通过p访问
	}

	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}
int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}