#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int* myFunc()
{
	int a = 10;
	return &a;
}
void test1()
{
	int* p = myFunc();
	printf("%d\n", *p);
	printf("%d\n", *p);			//��10���ֲ������ѱ��ͷ��ˣ�����ʹ�÷�ʽ�Ǵ����

}
char* getString()
{
	char str[] = "helloworld.";
	return str;
}
void test2()
{
	char* p = NULL;
	p = getString();
	printf("%s\n", p);		//ͬ���ֲ�����str�ѱ��ͷţ����캯�����ܷ��ؾֲ�������ֵ
}
int main(void)
{
	//test1();
	test2();
	return EXIT_SUCCESS;
}