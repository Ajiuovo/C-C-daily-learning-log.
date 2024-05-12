#define _CRT_SECURE_NO_WARNINGS		//vs下使用传统库函数，建议使用_s更安全函数(如strcpy--> strcpy_s)，如果不用会报错C4996
//除了引进宏的头文件，还可以在属性->预处理里添加宏定义。
#include <stdio.h>
#include <string.h>
#include <stdlib.h>			//malloc free
#include <math.h>
#include <time.h>
struct Person
{
	int age;
	char name[64];
};
//语法   typedef   原名  别名;
typedef struct Person myp;

//起别名示例
void test01()
{
	struct Person p = { 10,"aaa" };
	//等同于
	myp p2 = { 10,"aaa" };
}
//别名的作用1：区分数据类型
void test02()
{
	char* p1, p2;	//该种定义，p1是指针，p2是字符
	typedef char* PCHAR;
	PCHAR p1, p2;	//通过别名后定义，则p1，p2均为字符指针类型
}
//2、提高可移植性
void test02()
{
	long long a = 10;
	long long b = 20;
	//移植到没有long long类型的C89标准下，需要把每个long long改成 long，但如果使用了别名，只需要把原名那里修改一下就可以
}

int main(void)
{
	char buf[1024];
	strcpy(buf, "hello");

	return EXIT_SUCCESS;
}