#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
struct test
{
	char* name;
	int a;
};
void fun(struct test t)
{
	t.name = "����";
	t.a = 2;
	printf("!!!");
	printf("^%d   %s", t.a,t.name);
}
int maint(void)
{
	struct test t;
	t.a = 100;
	fun(t);
	printf("^%d", t.a);
	//struct info s ;		//���ṹ������ָ���Ա��������ʼ��
	//strcpy(s.name, "����");
	//s.age = 18;
	
	return EXIT_SUCCESS;
}