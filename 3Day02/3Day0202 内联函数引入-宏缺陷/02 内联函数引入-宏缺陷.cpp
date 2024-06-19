#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//宏操作缺陷1：必须要加括号保证运算完整
#define MYADD(x,y) x+y
void test01()
{
	int a = 1;
	int b = 2;
	int ret = MYADD(a, b)*20;	//结果与预期不符合，得到的是a+b*20，而不是(a+b)*20
	cout << ret << endl;	
}
#define MYCOMPARE(x,y) ((x)<(y)?(x):(y))
//缺陷2：即使加了括号，有些运算依然与预期不符合
//使用普通函数不会出现这个问题
void myCompare(int a,int b)
{
	int ret = a < b ? a : b;
	cout << "ret = " << ret << endl;
}
//内联函数实现1：
inline void func();
inline void func()
{
}

void test02()
{
	int a = 10;
	int b = 20;
	//int ret = MYCOMPARE(++a, b);	//预期是11，但返回了12，原来的表达式变成了((++a)<(b)?(++a):(b))
	//cout << ret << endl;
	myCompare(++a, b);
}

int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}