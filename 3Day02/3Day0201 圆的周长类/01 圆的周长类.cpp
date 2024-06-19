#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
//创建一个圆类
class Circle
{
	//公共权限
public:
	
	//1、类中的变量，称为成员变量
	//半径
	int m_r;

	//2、类中的函数，称为成员函数/成员方法
	//求周长函数
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};
void test01()
{
	Circle c1;	//通过类，创建（实例化）一个对象
	c1.m_r = 5;
	cout << "c1的周长为" << c1.calculateZC() <<endl;
}

//创建一个学生类
class Student
{
public:
	string s_name;
	int s_id;
	void setid(int id)
	{
		s_id = id;
	}
	void setname(string name)
	{
		s_name = name;
	}
	int showid()
	{
		cout <<"s_id = " << s_id << endl;
		return s_id;
	}
	string showname()
	{

		cout << "s_name = " << s_name << endl;
		return s_name;
	}
};
void test02()
{
	Student s;
	s.setid(0);
	s.setname("Alice");
	s.showid();
	s.showname();
}
int main(void)
{
	test01();
	test02();
	return EXIT_SUCCESS;
}