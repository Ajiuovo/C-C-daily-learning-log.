#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
namespace KingGlory
{
	int sunwukongId = 1;
}
void test01()
{
	//1�������÷�
	//cout << KingGlory::sunwukongId << endl;
	
	//����ͬ���ֲ�����
	int sunwukongId = 2;
	//using ���� namespace
	//using KingGlory::sunwukongId;
	//2����using������ͽ�ԭ��ͬʱ���֣�������Ϊ�������
	cout << sunwukongId << endl;	
}
void test02()
{
	int sunwukongId = 3;
	//3��using ����ָ��
	using namespace KingGlory;
	//4����using����ָ����ͽ�ԭ��ͬʱ���֣���Ӿͽ�ԭ��
	//5�������ֶ��using����ָ���Ҫ��������������
	cout << sunwukongId << endl;
}
int main(void)
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}