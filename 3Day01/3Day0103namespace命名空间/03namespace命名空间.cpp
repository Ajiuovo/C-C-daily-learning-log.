#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "game1.h"
#include "game2.h"
//1�������ռ���;��������Ƴ�ͻ����
void test1()
{	
	//goAtk();	//game1��game2��ͷ�ļ��ж�������һ��goAck�������޷��ֱ�����ĸ����ᱨ��˵���ض���
	LOL::goAtk();
}

//2�������ռ��ڿ��Էţ����������ṹ�� ��...
namespace A {
	int m_A;
	void func();
	class Animal{};
	struct MyStruct
	{

	};
}

//3�������ռ�  ����������ȫ����������
void test02()
{
	//namespace B {};
}

//4�������ռ����Ƕ�������ռ�
namespace B {
	int m_C = 10;
	namespace C {
		int m_C = 20;
	}
}
void test3()
{
	cout << "B�ռ��m_C = " << B::m_C << endl;
	cout << "C�ռ��m_C = " << B::C::m_C << endl;

}

//5�������ռ��ǿ��ŵģ���ʱ��������������³�Ա
namespace B {
	int m_B = 100;
}
void test4()
{
	cout << "B�ռ��m_C = " << B::m_C << endl;
	cout << "B�ռ��m_B = " << B::m_B << endl;
}

//6�� �����ռ������������
namespace {
	int m_D = 50;	//�൱����static int m_D = 50
}
void test5()
{
	cout << "�����ռ��m_D = " << ::m_D << endl;
}

//7�������ռ���������
namespace veryLongName {
	int m_E = 10000;
}
void test6()
{
	namespace s = veryLongName;
	cout << "s�ռ��m_E = " << s::m_E << endl;
}
int main(void)
{
	//test1();
	//test3();
	//test4();
	//test5();
	test6();
	return EXIT_SUCCESS;
}
