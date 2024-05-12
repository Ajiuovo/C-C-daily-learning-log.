#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//变量的两种修改方式
void test01()
{
	int a = 10;
	a = 20;

	int b = 10; 
	int* p = &b; 
	*p = 20;
}

//对自定义结构类型变量修改
typedef struct Person
{
	int age;
	char name[64];
}myp;
void test02()
{
	struct Person p = { 10,"aaa" };
	myp p2 = { 10,"aaa" };
	//直接修改
	p2.age = 12;
	//通过指针间接修改
	struct Person* pp = &p;
	pp->age = 23;
	printf("p2.age=%d\n", p2.age);
	printf("p.age=%d\n", pp->age);
	//通过指针偏移修改name
	char* p3 = &p;
	strcpy(p3 + 4, "hhh");
	printf("%s\n", p3 + 4);
	//通过指针偏移修改age
	char* p4 = &p;
	*(int*)(p4+0) = 100;	//因为age是第一个元素，所以就不偏移了。
	printf("p4.age=%d\n", *(int*)p4);


}


int main(void)
{

	test02();
	return EXIT_SUCCESS;
}