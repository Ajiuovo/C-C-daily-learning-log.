#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main02(void)
{
	printf("sizeof(int *)=%llu\n", sizeof(int *));		//ָ���С�������޹أ�ֻ�뵱ǰʹ�õ�ƽ̨�ܹ��й�
	printf("sizeof(double *)=%llu\n", sizeof(double *));
	printf("sizeof(char *)=%llu\n", sizeof(char *));
	printf("sizeof(void *)=%llu\n", sizeof(void *));		//����ָ��
	//Ұָ�����1
	//int* p;
	//Ұָ�����2
	int* p=10;				//0-255Ĭ����������ϵͳ�������ռ�Ҳ�п�����ɵ�ַ��ͻ����˲���������ֱ��ָ���ռ��ַ
	*p = 2000;
	printf("%p\n",p);			//Ұָ�루û��һ����Ч�ĵ�ַ�ռ��ַ��ָ��/p������һ��ֵ������ֵ���ǿɷ��ʵ��ڴ�ռ䣩��������ʹ��
	printf("%d\n", *p);				//�ž�Ұָ��
	return EXIT_SUCCESS;
}