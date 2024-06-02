#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stddef.h>
typedef struct Teacher
{
	char a;//0-3
	int b;//4-7
}tec;
//查看b的偏移量
void test01()
{
	tec p1;
	tec* p = &p1;
	printf("b的属性偏移量为%d\n", (int)&(p->b)-(int)p);
	printf("b的属性偏移量为%d\n", offsetof(struct Teacher,b));
}
//通过偏移量操作内存
void test02()
{
	tec t = { 'a',10 };
	printf("t.b = %d\n", *(int *)((char *)(&t)+ offsetof(tec, b)));
}
int main(void)
{

	test01();
	test02();
	return EXIT_SUCCESS;
}