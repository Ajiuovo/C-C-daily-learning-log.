#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main01(void)
{
	int a = 10;
	int* p = &a;	//int*  ��һ�����ͣ���������ָ�룬p�Ǳ�����
	*p = 2000;		//*p����ȡ��p�����е����ݣ�������ַ���������ҵ���Ӧ�ڴ�ռ�
					//*p�������ֵ����������ݵ��ڴ�ռ䣬*p�������ֵ������ȡ���ռ�������
	printf("%p\n", &a);
	printf("%p\n", p);
	printf("%d\n", a);
	a = 350;
	printf("%d\n", *p);		//�����*p����ֵ
	return EXIT_SUCCESS;
}