#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int atk = 1000;
void test1()
{
	int atk = 2000;
	cout << "atk = " << atk << endl;
	//::�������������ǰ��ʲô�����ӣ�����ȫ��������
	std::cout << "ȫ��atk = " << ::atk << endl;


}
int main(void)
{
	test1();

	return EXIT_SUCCESS;
}