#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//1��ֵ����
void  mySwap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << " b = " << b << endl;
}
//2��ַ����
void  mySwap02(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	cout << "a = " << *a << " b = " << *b << endl;
}
//3�����ô��ݣ��൱�ڽ����������ӣ�int &a = a;
void  mySwap03(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a = " << a << " b = " << b << endl;
}
void test01()
{
	int a = 10;
	int b = 20;
	//mySwap01(a, b);
	//cout << "a = " << a << " b = " << b << endl;
	//mySwap02(&a, &b);
	//cout << "a = " << a << " b = " << b << endl;
	mySwap03(a, b);
	cout << "a = " << a << " b = " << b << endl;
}

int& func()
{
	int a = 10;
	return a;
}
//4������ע������
void test02()
{
	//4.1 ���ñ�������һ��Ϸ��ڴ�ռ�
	//int& a = 10;
	//4.2 ��Ҫ���ؾֲ�����������
	int& ret = func();
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;
}
//4.3���Է��ؾֲ���̬����������
int& func2()
{
	static int a = 10;
	return a;
}
void test03()
{
	int& ret = func2();
	cout << "ret = " << ret << endl;
	cout << "ret = " << ret << endl;
	//4.4 ����������ֵ�����ã���ô�����ĵ��ÿ�����Ϊ��ֵ
	func2() = 1000;
	cout << "ret = " << ret << endl;
}
int main(void)
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}