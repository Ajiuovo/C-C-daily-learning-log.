#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	//��������
	void setName(string Name)
	{
		name = Name;
		//������β�������ò�Ҫ�ͳ�Ա��������ͬ����Ȼ�������
	}
	//��ȡ����
	string getName()
	{
		return name;
	}
	//��ȡ����
	int getAge()
	{
		return age;
	}
	//���ð���
	void setLover(string lover)
	{
		Lover = lover;
	}

private:
	string name;		//�������ɶ���д
	int age = 18;			//���䣬�ɶ�
	string Lover;		//���ˣ�ֻд
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