#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main0601(void)
{
	int a = 0x12425622;
	int* p = &a;
	char* q = &a;
	printf("%p\n", p);			//��ַ
	printf("%p\n", *p);			//��ַ��ʽ��aֵ
	printf("%x\n", *p);			//aֵ
	printf("%c\n", *q);			//ascii��22��Ӧ���ַ�
	printf("%x\n", *q);			//22

	//ָ������Ͳ����ܾ���ָ�뱾��Ĵ�С��sizeof(p)==sizeof(q)
	//ָ�����;����˴�ָ������ŵ��ڴ�ռ��ַ����Ҫ��ȡ���ֽ�����char����һ���ֽڣ�int����4���ֽ�

	return EXIT_SUCCESS;
}

int main0602(void)
{
	int a = 0x12425622;
	int* p = &a;
	printf("%p\n", p);			//��ַ
	printf("%p\n", p+1);			//����4���ֽ�
	return EXIT_SUCCESS;
}