#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef union test				//������Ϊtest_t
{
	char ch;
	short sh;
	int a;
}test_t;
int main0101(void)
{
	test_t obj;
	obj.a = 0x87654321;
	printf("&obj=%p\n", &obj);		//�������У����г�Ա������ַһ�£�����һ���洢�ռ䣬
	printf("&obj.ch=%p\n", &obj.ch);
	printf("&obj.sh=%p\n", &obj.sh);
	printf("&obj.a=%p\n", &obj.a);
	printf("size=%d\n", sizeof(obj));		//������Ĵ�С������Ա�����Ĵ�С
	printf("a=0x%x\n", obj.a);
	printf("sh=0x%x\n", obj.sh);		//�޸�����һ��������ֵ����������ֵ��֮�޸�
	printf("ch=0x%x\n", obj.ch);
	obj.ch = 0xFF;
	printf("a=0x%x\n", obj.a);
	printf("sh=0x%x\n", obj.sh);		//�޸�����һ��������ֵ����������ֵ��֮�޸�
	printf("ch=0x%x\n", obj.ch);
	return EXIT_SUCCESS;
}

enum color{red,green,blue,black,pink,yellow};
int main0102(void)
{
	int flg = 1;
	if (flg == blue)
	{
		printf("blue==2\n");
	}
	else
	{
		printf("blue is not 1, blue=%d", blue);
	}
	return EXIT_SUCCESS;
}