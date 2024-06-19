#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
//1、C++用结构体封装：将属性和行为作为一个整体，来表现生活中的事务
struct Person
{
	char name[64];
	int age;
	void PersonEat()
	{
		cout << "人吃饭" << endl;
	}
};
struct Dog
{
	char name[64];
	int age;
	void DogEat()
	{
		cout << "狗吃饭" << endl;
	}
};
void test01()
{
	Person p;
	strcpy(p.name, "Alice");
	p.PersonEat();
	Dog d;
	//p.DogEat();		//不能用
}

//2、C++用类封装：实现第二层理念：将属性和行为  加以权限
class Personn
{
public:
	char name[64];
	int age;
	void PersonEat()
	{
		cout << "人吃饭" << endl;
	}
};
class Dogg
{
public:
	char name[64];
	int age;
	void DogEat()
	{
		cout << "狗吃饭" << endl;
	}
};
void test02()
{
	Personn p;
	strcpy(p.name, "Alice");
	p.PersonEat();
	Dogg d;
	//p.DogEat();		//不能用
}

//3、权限区分
struct Person2
{
public:		//公有权限
	string name;
protected:	//保护权限
	int age;
private:	//私有权限
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
		cout << "人吃饭" << endl;
	}
};
void test03()
{
	Person2 p;
	p.name = "B";
	//p.age = 100;		//保护权限，类外访问不到
	//p.pwd = 456789;		//私有权限，类外访问不到，子类也访问不到

	p.PersonEat();
	Dogg d;
	//p.DogEat();		//不能用
}
int main(void)
{
	//test01();
	//test02();
	test03();
	return EXIT_SUCCESS;
}