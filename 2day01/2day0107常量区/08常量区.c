#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//const修饰的变量---全局/局部
//全局常量
const int a = 10;
void test01()
{
	//a=100;				//直接修改时被常量区保护
	int* p = &a;			//间接修改时，语法通过，但运行失败
	*p = 100;
	printf("%d\n", a);
}
void test02()
{
	const int b = 20;
	//b = 200;				//修改失败
	int* p = &b;			//间接修改时，修改成功
	*p = 100;
	printf("%d\n", *p);
	//int arr[b];			//C语言中，const修饰的局部变量是伪常量，不可以初始化数组
}
//字符串常量
//特点， 字符串常量不可修改
void test03()
{
	char *p1="hellow";
}
int main(void)
{
	//test01();
	test02();
	//test03();
	return EXIT_SUCCESS;
}