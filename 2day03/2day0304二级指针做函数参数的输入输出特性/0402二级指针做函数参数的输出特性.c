#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//2��������ԣ��ڱ��������з���ռ䣬�����������з���
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
	allocateSpace(&p);			//��ַ�����޸�
	//printArray(p);
	printArray2(&p);
	freeArray(p);		//ͬ��ָ�벻�������ͷţ��ü�һ�д���"p=NULL"�ں�������֮�󣬻���ֱ���ڱ��������ͷ�
	if (p = NULL)
	{
		printf("p�ɹ��ͷ��ˣ��ǿ�ָ��");
	}
	else
	{
		printf("p��Ұָ��");
	}
}
int main(void)
{
	test03();
	return EXIT_SUCCESS;
}