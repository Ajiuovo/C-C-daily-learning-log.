#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//1��ջ����������		�ߵ�ַ->�͵�ַ
void test01()
{
	int a = 10;
	int b = 20;
	printf("%p\n", &a);		//��ֵΪ12������Ϊvs�л�Ҫʹ��ָ�뱣��������  4+4+4=12
	printf("%p\n", &b);
}
//2���ڴ��ŷ���
void test02()
{
	int a = 0x11223344;
	char* p = &a;
	printf("%x\n", *p);		//44 ��λ�ֽ�����   �͵�ַ			��С�˶��룩
	printf("%x\n", *(p+1));		//33  ��λ�ֽ�����	�ߵ�ַ
}

int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}