#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void func()
{
	int c = 30;		//��func�п���ʹ��
}

char* test01()
{
	int b = 10;		//��test01��func�п���ʹ��
	func();	


	char* p = malloc(10);	//����ֻҪû�б�free  ������ʹ��

	printf("%p\n", p);
	return p;
}
int main(void)
{
	int a = 10;	 //��main��test01��func�ж�����ʹ��
	char *p = test01();
	printf("%p", p);
	return EXIT_SUCCESS;
}