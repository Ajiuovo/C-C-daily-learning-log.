#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//������������
//1����ͬһ��������
//2������������ͬ
//3���������������͡�˳��ͬ
//4������ֵ��������Ϊ�������ص�����





//class Person		
//{
//public:	
//	void func()			//��Ա����������ȫ�ֺ�����������ͬ
//	{
//
//	}
//};

void func()
{
	cout << "func()����" << endl;
}
//int func()	//����ֵ����ѡ����ջ򲻽��գ����Է���ֵ��������Ϊ�������ص�����
//{
//	cout << "func()����" << endl;
//}
void func(int a)
{
	cout << "func(int a)����" << endl;
}
void test01()
{
	func();
	func(1);
}

//5������������  ���������汾
//void myFunc(int a)	//���ܼ�����汾������ֶ�����
//{
//	cout << "myFunc(int& a)����" << endl;
//}
void myFunc(int& a)
{
	cout << "myFunc(int& a)����" << endl;
}
void myFunc(const int& a)
{
	cout << "myFunc(const int& a)����" << endl;
}
void test02()
{
	int a = 10;
	myFunc(a);
	myFunc(5);
}

//6��������������Ĭ�ϲ�����ע���������Գ���
void fun2(int a, int b=10){}
void fun2(int a){}
void test02()
{
	//fun2(10);//���ֶ�����
}
int main(void)
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}