#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	//设置姓名
	void setName(string Name)
	{
		name = Name;
		//这里的形参名字最好不要和成员变量名相同，不然会出问题
	}
	//获取姓名
	string getName()
	{
		return name;
	}
	//获取年龄
	int getAge()
	{
		return age;
	}
	//设置爱人
	void setLover(string lover)
	{
		Lover = lover;
	}

private:
	string name;		//姓名，可读可写
	int age = 18;			//年龄，可读
	string Lover;		//爱人，只写
};
void test01()
{
	Person p;
	p.setName("zhangsan");
	p.setLover("Alice");
	cout << "p.Name = " << p.getName() << endl;
	cout << "p.Age = " << p.getAge() << endl;
}
int main(void)
{
	test01();
	return EXIT_SUCCESS;
}