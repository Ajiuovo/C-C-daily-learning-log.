#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <string>
//1、对const变量 取地址，会分配临时内存
void test01()
{
	const int a = 10;
	int* p = (int*)&a;
}
//2、使用普通变量初始化 const变量，分配内存在栈上，可以通过间接修改
void test02()
{
	int a = 20;
	const int b = a;
	int* p = (int*)&b;
	*p = 100;
	cout << "const b = " << b << endl;
}
//3、对于自定义数据类型，可以通过间接引用修改
struct Person
{
	string m_Name;
	int m_Age;

};
void test03()
{
	const Person p = {"A",20};
	Person* pp = (Person*)&p;
	(*pp).m_Name = "Tom";
	pp->m_Age = 10;
	cout << "姓名：" << p.m_Name << "年龄：" << p.m_Age << endl;
}
int main(void)
{
	//test02();
	test03();

	return EXIT_SUCCESS;
}