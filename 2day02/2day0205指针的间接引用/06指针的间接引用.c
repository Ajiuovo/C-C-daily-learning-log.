#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//��Ӹ�ֵ������
//����������һ��ͨ������һָ�����������һʵ�Ρ�һ�β�
//�����佨����ϵ
//�����ò���
void test01()
{
	int a = 10;
	int* p = NULL;
	p=&a;
	printf("%d\n", *p);
}
//�βη�ʽ����ָ���Ӹ�ֵ
void changeValue(int* p)
{
	*p = 2000;
}
void test02()
{
	int a2 = 20;
	changeValue(&a2);
	printf("%d\n", a2);
	printf("%d\n", &a2);		//ÿ�ζ���һ������qt��ÿ�ζ���һ��
}


int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}