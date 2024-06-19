#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "test.h"
using namespace std;

//2、解决办法：告诉编译器以C的方式链接show函数
//extern "C" void show();
//3、如何批量链接C的函数？在test.h中做文章。
void test01()
{
	show();	//1、在C++中有函数重载会修饰函数名，但是show是C语言文件，因此链接失败
}
int main(void)
{

	test01();
	return EXIT_SUCCESS;
}