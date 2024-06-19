#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "09 常量引用.h"
using namespace std;
void test01()
{
	//int& ref = 10;		//报错
	const int& ref = 10;	//加了const之后，相当于写成 int temp = 10; const int &ref  = temp;
	int* p = (int *)&ref;
	*p = 1000;
	cout << ref << endl;
}

//常量引用的使用场景：修饰形参，防止误操作
void showValue(const int &a)
{
	//a = 100000;
	cout << "a = " << a << endl;
}
void test02()
{
	int a = 100;
	showValue(a);
	cout << "a = " << a << endl;
}
int main(void)
{
	test02();

	return EXIT_SUCCESS;
}