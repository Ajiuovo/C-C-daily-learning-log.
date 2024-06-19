#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int atk = 1000;
void test1()
{
	int atk = 2000;
	cout << "atk = " << atk << endl;
	//::代表作用域，如果前面什么都不加，代表全局作用域
	std::cout << "全局atk = " << ::atk << endl;


}
int main(void)
{
	test1();

	return EXIT_SUCCESS;
}