#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void test01()
{
	//int* p = malloc(sizeof(int)*10);
	int* p = calloc(10,sizeof(int));		//calloc��malloc�Ĳ�ͬ�㣺���ʼ������Ϊ0������������ͬ����ԭ����һ��Ϊ����
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

//realloc���·����ڴ棺realloc(p,sizeof(int)*10);   ��pָ��ԭ�пռ�����չ/���ٿռ䵽10��int��С
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


	p = realloc(p, sizeof(int) * 12);		//���ԭ�ռ�����ռ��㹻����ֱ����ԭ�ռ�ĩβ�������������������һ�飬����ԭ���Ĺ�ȥ�������١�
	printf("%d\n", p);
	for (size_t i = 0; i < 12; i++)
	{
		printf("%d\n", p[i]);			//��չ�Ļ������ʼ���¿ռ�
	}
	p = realloc(p, sizeof(int) * 5);
	printf("%d\n", p);
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n", p[i]);			//���ٵĻ������ͷź���ռ䣬�ͷź��޷�ͨ��p����
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