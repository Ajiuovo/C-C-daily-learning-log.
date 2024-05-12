#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//static 静态变量
//特点：在运行前分配内存，程序运行结束，生命周期结束，在本文件内都可以使用静态变量
static int a = 10;
void test1()
{
	static int b = 20;		//虽然和a生命周期一样，但作用域是局部的
}
void test2()
{
	//extern作用：告诉编译器，下面代码中出现ta不要报错，是外部链接属性，在其他文件中；
	//但如果其他文件中并未定义，会报错LNK1120错误：无法解析的外部命令
	extern int ta;
	printf("%d\n", ta);
}

int main(void)
{
	test2();
	return EXIT_SUCCESS;
}