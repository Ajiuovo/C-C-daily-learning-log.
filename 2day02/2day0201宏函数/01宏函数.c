#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//2、通常将频繁、短小的函数，写成宏函数
#define MYADD(x,y)	x+y
#define MYADD2(x,y)	((x)+(y))
//3、宏函数会比普通函数在一定程度上，效率高，省去普通函数入栈、出栈时间的开销
//因为在预处理阶段就被替换了，以空间换时间


void test01()
{
	printf("%d\n", MYADD(3, 5));
	//1、宏函数需要加小括号修饰，保证运算的完整性
	printf("%d\n", MYADD(3, 5) * 10);			//3+5*10
	printf("%d\n", MYADD(3, 5) * 10);       //((3)+(5))*10
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}