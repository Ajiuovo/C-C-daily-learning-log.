#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1���������ԣ������������з���ռ䣬�ڱ��������з���
void showArray(int** pArray)
{
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d ",*pArray[i]);
	}
}
void test01()
{
	//�����ڶ����Ķ���ָ��
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
	//����Ҫ����Ϊֻ��Ҫ�ͷŶ������ݣ�����ֻ�Ǵ���˵�ַ��������ָ�뿪�ٵĶѿռ�
	/*for (size_t i = 0; i < 5; i++)
	{
		if (pArray[i] != NULL)
		{
			free(pArray[i]);
			pArray[i] = NULL;
		}
	}*/
	//�ͷŶ�������
	if (pArray != NULL)
	{
		free(pArray);
		pArray = NULL;
	}
}


void test02()
{
	//������ջ����һ��ָ��
	int* pArray[5];
	for (size_t i = 0; i < 5; i++)
	{
		pArray[i] = malloc(sizeof(int));
		*(pArray[i]) = 10 + i;
	}
	showArray(pArray);			//ͬ�������ã���Ϊ�������ᱻ�˻�Ϊ��ַ��pArray[0]Ҳ���һ��ָ�룬�൱��ԭ���Ķ���ָ��
	//�ͷŶ���
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