#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
namespace KingGlory
{
	int sunwukongId = 1;
}
void test01()
{
	//1、常规用法
	//cout << KingGlory::sunwukongId << endl;
	
	//声明同名局部变量
	int sunwukongId = 2;
	//using 声明 namespace
	//using KingGlory::sunwukongId;
	//2、当using声明与就近原则同时出现，报错，因为多次声明
	cout << sunwukongId << endl;	
}
void test02()
{
	int sunwukongId = 3;
	//3、using 编译指令
	using namespace KingGlory;
	//4、当using编译指令与就近原则同时出现，遵从就近原则
	//5、当出现多个using编译指令，需要加作用域以区分
	cout << sunwukongId << endl;
}
int main(void)
{
	//test01();
	test02();
	return EXIT_SUCCESS;
}