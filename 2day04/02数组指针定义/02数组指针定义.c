#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//����ָ��Ķ��巽ʽ
//1���ȶ�����ͨ�����������ͨ������������Ͷ�������ָ��
void test01()
{
	typedef int(ARRAY_TYPE)[5];			//typedef�ض������Ƶ���һ���÷���ARRAY_TYPE�˺�ʹ������5��Ԫ�ص�int���飬��Ϊ�������
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

//2������ָ��������������ͣ�ֱ�Ӹ���ַ����
void test02()
{
	int arr[5] = { 1,2,3,4,5 };
	typedef int(*ARRAY_TYPE)[5];
	ARRAY_TYPE arrP = &arr;
	for (size_t i = 0; i < 5; i++)
	{
		printf("%d\n",(*arrP)[i]); 
		printf("%d\n",*(*arrP+i));		//��ʵ���൱��һ������ָ��
	}

}


//3��ֱ�Ӷ�������ָ�����
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