#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
const double PI = 3.14;
//����һ��Բ��
class Circle
{
	//����Ȩ��
public:
	
	//1�����еı�������Ϊ��Ա����
	//�뾶
	int m_r;

	//2�����еĺ�������Ϊ��Ա����/��Ա����
	//���ܳ�����
	double calculateZC()
	{
		return 2 * PI * m_r;
	}

};
void test01()
{
	Circle c1;	//ͨ���࣬������ʵ������һ������
	c1.m_r = 5;
	cout << "c1���ܳ�Ϊ" << c1.calculateZC() <<endl;
}

//����һ��ѧ����
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