#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//sizeof����һ������������һ����������������+-*/����Ϊsizeof�������Сʱ���Բ������ţ�����������ӡ�
void test01()
{
	printf("size of int = %d\n", sizeof(int));
	double d = 3.14;
	printf("size of d = %d\n", sizeof d);
	printf("size of d = %d\n", sizeof(d));
}

//sizeof����ֵ����  �޷�������
void test02()
{
	size_t a = 10;
	//���޷������ͺ����������㣬��ת��Ϊ�޷�������
	if (a - 20 > 0)
	{
		printf("����0\n");
	}
	else
	{
		printf("С��0\n");
	}
	//���sizeof����ֵ
	if (sizeof(int) - 5 > 0)
	{
		printf("sizeof(int) - 5����0\n");
	}
	else
	{
		printf("sizeof(int) - 5С��0\n");
	}
}

//sizeof��;��ͳ�����鳤��
void test03()
{
	int arr[] = { 2.51,65,23,457,143,124 };
	printf("arr length:%d\n", sizeof(arr));			//ע�⣬��������Ϊ��������������˻�Ϊָ�룬��������sizeof(arr)
}

int main(void)
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}