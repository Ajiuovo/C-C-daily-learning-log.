#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main03(void)
{
	int a = 345;
	char c = 'a';
	void* p;
	//p = &a;
	p = &c;
	//printf("%d\n", *((int*)p));
	printf("%c\n", *((char*)p));		//���Խ�������һ�ֱ�����ַ����ʹ��ʱ������ǿ��ת��Ϊ������������
	return EXIT_SUCCESS;
}