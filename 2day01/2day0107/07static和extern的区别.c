#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//static ��̬����
//�ص㣺������ǰ�����ڴ棬�������н������������ڽ������ڱ��ļ��ڶ�����ʹ�þ�̬����
static int a = 10;
void test1()
{
	static int b = 20;		//��Ȼ��a��������һ�������������Ǿֲ���
}
void test2()
{
	//extern���ã����߱���������������г���ta��Ҫ�������ⲿ�������ԣ��������ļ��У�
	//����������ļ��в�δ���壬�ᱨ��LNK1120�����޷��������ⲿ����
	extern int ta;
	printf("%d\n", ta);
}

int main(void)
{
	test2();
	return EXIT_SUCCESS;
}