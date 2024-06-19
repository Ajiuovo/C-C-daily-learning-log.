#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "game1.h"
#include "game2.h"
//1、命名空间用途：解决名称冲突问题
void test1()
{	
	//goAtk();	//game1和game2的头文件中都包含了一个goAck方法，无法分辨调用哪个。会报错说有重定义
	LOL::goAtk();
}

//2、命名空间内可以放：变量函数结构体 类...
namespace A {
	int m_A;
	void func();
	class Animal{};
	struct MyStruct
	{

	};
}

//3、命名空间  必须声明在全局作用域下
void test02()
{
	//namespace B {};
}

//4、命名空间可以嵌套命名空间
namespace B {
	int m_C = 10;
	namespace C {
		int m_C = 20;
	}
}
void test3()
{
	cout << "B空间的m_C = " << B::m_C << endl;
	cout << "C空间的m_C = " << B::C::m_C << endl;

}

//5、命名空间是开放的，随时可以向其中添加新成员
namespace B {
	int m_B = 100;
}
void test4()
{
	cout << "B空间的m_C = " << B::m_C << endl;
	cout << "B空间的m_B = " << B::m_B << endl;
}

//6、 命名空间可以是匿名的
namespace {
	int m_D = 50;	//相当于是static int m_D = 50
}
void test5()
{
	cout << "匿名空间的m_D = " << ::m_D << endl;
}

//7、命名空间可以起别名
namespace veryLongName {
	int m_E = 10000;
}
void test6()
{
	namespace s = veryLongName;
	cout << "s空间的m_E = " << s::m_E << endl;
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
