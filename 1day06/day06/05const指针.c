#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main0501(void)
{
	const int a=10;
	int* p;
	p = &a;
	*p = 650;
	printf("%d", *p);
	return EXIT_SUCCESS;
	//���峣������Ҫ�ú궨�壬��const�����б��۸ĵĿ���
}

//const����ָ��-1
int main0502(void)
{
	int a = 10;
	int b = 50;
	//const����ǰ�����޸�p������ֵ���������޸�*p��ֵ
	const int* p = &a;
	//*p = 500;		//����
	p = &b;
	return EXIT_SUCCESS;
}

//const����ָ��-2
int main0503(void)
{
	int a = 10;
	int b = 50;
	//const��*pǰ�����޸�p������ֵ���������޸�*p��ֵ
	int const * p = &a;
	//*p = 500;		//����
	p = &b;
	return EXIT_SUCCESS;
}

//const����ָ��-3
int main0504(void)
{
	int a = 10;
	//const��pǰ�������޸�p������ֵ���������޸�*p��ֵ
	int* const p = &a;
	*p = 500;
	//p = 2000;		//����
	return EXIT_SUCCESS;
}

//const����ָ��-4
int main0505(void)
{
	int a = 10;
	//const��pǰ�������޸�p������ֵ��Ҳ�������޸�*p��ֵ
	const int* const p = &a;
	//*p = 500;		//����
	//p = 2000;		//����
	return EXIT_SUCCESS;
}

//�ܽᣬconst��������һ�����֣����β��ֱ�Ϊֻ����
//�����ں����β��ڣ���ʾ��Ӧ����Ϊֻ���ڴ�ռ䣬��fputs(const char *str)����ǿ����׳�ԡ�

