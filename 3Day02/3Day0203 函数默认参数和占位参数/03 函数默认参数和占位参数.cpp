#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//Ĭ�ϲ���
//ע����������һ��λ������Ĭ�ϲ�������ô�����λ���𣬴����Ҷ�������Ĭ��ֵ
//��ʵ��Ӧ���У���Ĭ��ֵ�Ĳ��������
int func(int a = 10, int b =10)
{
	return a + b;
}
void test01()
{
	cout << func(20) << endl;
}
//ռλ������ֻдһ���������ͽ���ռλ������ʱ����Ҫ����ռλֵ
void func2(int a, int = 1)
{

}
void test02()
{
	func2(10, 1);
}
int main(void)
{
	test01();

	return EXIT_SUCCESS;
}