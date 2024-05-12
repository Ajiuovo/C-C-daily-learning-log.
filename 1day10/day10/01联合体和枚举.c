#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef union test				//重命名为test_t
{
	char ch;
	short sh;
	int a;
}test_t;
int main0101(void)
{
	test_t obj;
	obj.a = 0x87654321;
	printf("&obj=%p\n", &obj);		//联合体中，所有成员变量地址一致，共用一个存储空间，
	printf("&obj.ch=%p\n", &obj.ch);
	printf("&obj.sh=%p\n", &obj.sh);
	printf("&obj.a=%p\n", &obj.a);
	printf("size=%d\n", sizeof(obj));		//联合体的大小是最大成员变量的大小
	printf("a=0x%x\n", obj.a);
	printf("sh=0x%x\n", obj.sh);		//修改其中一个变量的值，其他变量值随之修改
	printf("ch=0x%x\n", obj.ch);
	obj.ch = 0xFF;
	printf("a=0x%x\n", obj.a);
	printf("sh=0x%x\n", obj.sh);		//修改其中一个变量的值，其他变量值随之修改
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