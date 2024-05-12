#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct a
{
	int a;	//4
	float b;	//4
	char c;	//1    12
};
struct b
{
	double d;	//8			嵌套时，两结构体存放时会对齐最大元素，无论是被嵌套还是嵌套
	char* e;		//4
	short f;		//2
	struct a abc;		//12	8+8+8+8  32  被嵌套的结构体元素的剩余空间不会放嵌套结构体的其他元素
};
struct c
{
	//测试存放结构
	short f;		//2
	char* e;		//4
	short g;		//2
	double d;	//8	
};
int main(void)
{
	struct c strc;
	struct b strb;
	strb.abc.a = 10;
	strb.d = 10.0f;
	printf("%d %.2f\n", strb.abc.a, strb.d);
	printf("%d\n",sizeof(strb));
	printf("%d\n", sizeof(strc));
	return EXIT_SUCCESS;
}