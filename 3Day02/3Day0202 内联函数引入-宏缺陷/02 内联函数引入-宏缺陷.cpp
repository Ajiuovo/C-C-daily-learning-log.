#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//�����ȱ��1������Ҫ�����ű�֤��������
#define MYADD(x,y) x+y
void test01()
{
	int a = 1;
	int b = 2;
	int ret = MYADD(a, b)*20;	//�����Ԥ�ڲ����ϣ��õ�����a+b*20��������(a+b)*20
	cout << ret << endl;	
}
#define MYCOMPARE(x,y) ((x)<(y)?(x):(y))
//ȱ��2����ʹ�������ţ���Щ������Ȼ��Ԥ�ڲ�����
//ʹ����ͨ������������������
void myCompare(int a,int b)
{
	int ret = a < b ? a : b;
	cout << "ret = " << ret << endl;
}
//��������ʵ��1��
inline void func();
inline void func()
{
}

void test02()
{
	int a = 10;
	int b = 20;
	//int ret = MYCOMPARE(++a, b);	//Ԥ����11����������12��ԭ���ı��ʽ�����((++a)<(b)?(++a):(b))
	//cout << ret << endl;
	myCompare(++a, b);
}

int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}