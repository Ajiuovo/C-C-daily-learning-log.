#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//const���εı���---ȫ��/�ֲ�
//ȫ�ֳ���
const int a = 10;
void test01()
{
	//a=100;				//ֱ���޸�ʱ������������
	int* p = &a;			//����޸�ʱ���﷨ͨ����������ʧ��
	*p = 100;
	printf("%d\n", a);
}
void test02()
{
	const int b = 20;
	//b = 200;				//�޸�ʧ��
	int* p = &b;			//����޸�ʱ���޸ĳɹ�
	*p = 100;
	printf("%d\n", *p);
	//int arr[b];			//C�����У�const���εľֲ�������α�����������Գ�ʼ������
}
//�ַ�������
//�ص㣬 �ַ������������޸�
void test03()
{
	char *p1="hellow";
}
int main(void)
{
	//test01();
	test02();
	//test03();
	return EXIT_SUCCESS;
}