#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1.
void test01()
{
	char ch;
	FILE* fw = fopen("./test.txt", "r");
	if (!fw)
	{
		return;
	}
	while (!feof(fw))		//������������һ��EOF�ַ�
	{
		ch = fgetc(fw);
		printf("%c", ch);
	}
	fclose(fw);
}
//2.
typedef struct Teacher
{
	char* name;		//������Կ��ٵ���������Ҫ��ָ�뵽�ļ��У�Ҫ��ָ��ָ������ݴ�ŵ��ļ���
	int b;
}tec;
int main(void)
{
	test01();

	return EXIT_SUCCESS;
}