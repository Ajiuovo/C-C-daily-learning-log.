#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void test01()
{
	//1、引用基本语法： 类型 & 别名  = 原名;
	int a = 10;
	int& b = a;
	b = 100;
	cout << "a = " << a << endl;
}
void test02()
{
	int a = 19;
	//2、引用必须初始化
	int& b = a;	
	//3、引用一旦初始化，就不可以引向其他变量
	int c = 100;
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
//4、对数组建立引用
void test03()
{
	int arr[10];
	//4.1直接建立引用
	int(&parr)[10] = arr;
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = 10 + i;
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << parr[i] << endl;
	}
	//4.2 先定义数组类型的别名，再通过类型，定义引用
	typedef int(Array_type)[10];
	Array_type& parr2 = arr;
	for (size_t i = 0; i < 10; i++)
	{
		cout << parr2[i] << endl;
	}
}
int main(void)
{
	//test01();
	//test02();
	test03();

	return EXIT_SUCCESS;
}