#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
void test01()
{
	//1�����û����﷨�� ���� & ����  = ԭ��;
	int a = 10;
	int& b = a;
	b = 100;
	cout << "a = " << a << endl;
}
void test02()
{
	int a = 19;
	//2�����ñ����ʼ��
	int& b = a;	
	//3������һ����ʼ�����Ͳ�����������������
	int c = 100;
	b = c;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
}
//4�������齨������
void test03()
{
	int arr[10];
	//4.1ֱ�ӽ�������
	int(&parr)[10] = arr;
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = 10 + i;
	}
	for (size_t i = 0; i < 10; i++)
	{
		cout << parr[i] << endl;
	}
	//4.2 �ȶ����������͵ı�������ͨ�����ͣ���������
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