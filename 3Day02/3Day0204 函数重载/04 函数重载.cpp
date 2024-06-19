#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//函数重载条件
//1、在同一个作用域
//2、函数名称相同
//3、参数个数、类型、顺序不同
//4、返回值不可以作为函数重载的条件





//class Person		
//{
//public:	
//	void func()			//成员函数，不是全局函数，作用域不同
//	{
//
//	}
//};

void func()
{
	cout << "func()调用" << endl;
}
//int func()	//返回值可以选择接收或不接收，所以返回值不可以作为函数重载的条件
//{
//	cout << "func()调用" << endl;
//}
void func(int a)
{
	cout << "func(int a)调用" << endl;
}
void test01()
{
	func();
	func(1);
}

//5、函数重载中  引用两个版本
//void myFunc(int a)	//不能加这个版本，会出现二义性
//{
//	cout << "myFunc(int& a)调用" << endl;
//}
void myFunc(int& a)
{
	cout << "myFunc(int& a)调用" << endl;
}
void myFunc(const int& a)
{
	cout << "myFunc(const int& a)调用" << endl;
}
void test02()
{
	int a = 10;
	myFunc(a);
	myFunc(5);
}

//6、函数重载碰到默认参数，注意避免二义性出现
void fun2(int a, int b=10){}
void fun2(int a){}
void test02()
{
	//fun2(10);//出现二义性
}
int main(void)
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}