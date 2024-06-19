#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//默认参数
//注意事项，如果有一个位置有了默认参数，那么从这个位置起，从左到右都必须有默认值
//即实际应用中，有默认值的参数往后放
int func(int a = 10, int b =10)
{
	return a + b;
}
void test01()
{
	cout << func(20) << endl;
}
//占位参数：只写一个参数类型进行占位，调用时必须要传入占位值
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