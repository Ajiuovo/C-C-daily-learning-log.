#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "test.h"
using namespace std;

//2������취�����߱�������C�ķ�ʽ����show����
//extern "C" void show();
//3�������������C�ĺ�������test.h�������¡�
void test01()
{
	show();	//1����C++���к������ػ����κ�����������show��C�����ļ����������ʧ��
}
int main(void)
{

	test01();
	return EXIT_SUCCESS;
}