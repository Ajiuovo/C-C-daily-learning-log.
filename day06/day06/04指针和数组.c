#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main04(void)
{
	int a[] = { 1,3,61,34,632,56 };
	int b[3];
	//b = a;			//��ֹ��������b�ǵ�ַ�����������Ա���ֵ�޸�

	int* p;
	p = a;
	int n = sizeof(a) / sizeof(a[0]);
	for (size_t i = 0; i < n; i++)
	{	
		//�����ʽ1��p�ȼ���a
		//printf("%d\n", p[i]);
		
		//�����ʽ2��
		printf("%p\n", p);
		printf("%d\n", *(p+i));

		//�����ʽ3����ӡ������pָ��һ����Ч��ַ�ռ�
		//printf("%d\n", *p);
		//p++;					

	}
	return EXIT_SUCCESS;

}