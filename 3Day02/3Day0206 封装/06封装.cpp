#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//1��C++�ýṹ���װ�������Ժ���Ϊ��Ϊһ�����壬�����������е�����
struct Person
{
	char name[64];
	int age;
	void PersonEat()
	{
		cout << "�˳Է�" << endl;
	}
};
struct Dog
{
	char name[64];
	int age;
	void DogEat()
	{
		cout << "���Է�" << endl;
	}
};
void test01()
{
	Person p;
	strcpy(p.name, "Alice");
	p.PersonEat();
	Dog d;
	//p.DogEat();		//������
}

//2��C++�����װ��ʵ�ֵڶ�����������Ժ���Ϊ  ����Ȩ��
class Personn
{
public:
	char name[64];
	int age;
	void PersonEat()
	{
		cout << "�˳Է�" << endl;
	}
};
class Dogg
{
public:
	char name[64];
	int age;
	void DogEat()
	{
		cout << "���Է�" << endl;
	}
};
void test02()
{
	Personn p;
	strcpy(p.name, "Alice");
	p.PersonEat();
	Dogg d;
	//p.DogEat();		//������
}

//3��Ȩ������
struct Person2
{
public:		//����Ȩ��
	string name;
protected:	//����Ȩ��
	int age;
private:	//˽��Ȩ��
	int pwd;
public:
	void func()
	{
		name = "A";
		age = 10;
		pwd = 123456;
	}
	void PersonEat()
	{
		cout << "�˳Է�" << endl;
	}
};
void test03()
{
	Person2 p;
	p.name = "B";
	//p.age = 100;		//����Ȩ�ޣ�������ʲ���
	//p.pwd = 456789;		//˽��Ȩ�ޣ�������ʲ���������Ҳ���ʲ���

	p.PersonEat();
	Dogg d;
	//p.DogEat();		//������
}
int main(void)
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}