#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//sizeof不是一个函数，而是一个操作符，类似于+-*/，因为sizeof求变量大小时可以不加括号，而函数必须加。
void test01()
{
	printf("size of int = %d\n", sizeof(int));
	double d = 3.14;
	printf("size of d = %d\n", sizeof d);
	printf("size of d = %d\n", sizeof(d));
}

//sizeof返回值类型  无符号整型
void test02()
{
	size_t a = 10;
	//当无符号整型和整型做运算，都转换为无符号整型
	if (a - 20 > 0)
	{
		printf("大于0\n");
	}
	else
	{
		printf("小于0\n");
	}
	//检查sizeof返回值
	if (sizeof(int) - 5 > 0)
	{
		printf("sizeof(int) - 5大于0\n");
	}
	else
	{
		printf("sizeof(int) - 5小于0\n");
	}
}

//sizeof用途：统计数组长度
void test03()
{
	int arr[] = { 2.51,65,23,457,143,124 };
	printf("arr length:%d\n", sizeof(arr));			//注意，数组名作为函数参数传入后退化为指针，不能再用sizeof(arr)
}

int main(void)
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}