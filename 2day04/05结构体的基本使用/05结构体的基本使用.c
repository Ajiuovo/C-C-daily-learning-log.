#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
typedef struct MyStruct
{
	char name[64];
	int age;

}stu;
void test01()
{
	//创建在栈区
	stu p;
	strcpy(p.name,"Alice");
	p.age = 19;
	printf("%s %d\n", p.name, p.age);
}
void test02()
{
	//创建在堆区
	stu *p = malloc(sizeof(stu));
	strcpy(p->name, "Alice");
	p->age = 19;
	printf("%s %d\n", p->name, p->age);
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}
//结构体变量数组
void printStuArray(stu p[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%s %d\n", p[i].name, p[i].age);
	}
}
void test03()
{
	//在栈上
	stu p[] = {
		{"aaaa",10},
		{"bbbb",11},
		{"cccc",11}
	};
	int len = sizeof(p) / sizeof(p[0]);
	/*printf("%d\n", len);*/
	printStuArray(p, len);
}
void test04()
{
	//在堆上
	stu* p = malloc(sizeof(stu) * 3);
	for (size_t i = 0; i < 3; i++)
	{
		sprintf(p[i].name, "name%d",i+1);
		p[i].age = i + 10;
	}
	printStuArray(p, 3);
	if (p != NULL)
	{
		free(p);
		p = NULL;
	}
}
int main(void)
{
	//test01();
	//test02();
	//test03();
	test04();

	return EXIT_SUCCESS;
}