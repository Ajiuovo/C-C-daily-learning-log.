#define _CRT_SECURE_NO_WARNINGS		//vs��ʹ�ô�ͳ�⺯��������ʹ��_s����ȫ����(��strcpy--> strcpy_s)��������ûᱨ��C4996
//�����������ͷ�ļ���������������->Ԥ��������Ӻ궨�塣
#include <stdio.h>
#include <string.h>
#include <stdlib.h>			//malloc free
#include <math.h>
#include <time.h>
struct Person
{
	int age;
	char name[64];
};
//�﷨   typedef   ԭ��  ����;
typedef struct Person myp;

//�����ʾ��
void test01()
{
	struct Person p = { 10,"aaa" };
	//��ͬ��
	myp p2 = { 10,"aaa" };
}
//����������1��������������
void test02()
{
	char* p1, p2;	//���ֶ��壬p1��ָ�룬p2���ַ�
	typedef char* PCHAR;
	PCHAR p1, p2;	//ͨ���������壬��p1��p2��Ϊ�ַ�ָ������
}
//2����߿���ֲ��
void test02()
{
	long long a = 10;
	long long b = 20;
	//��ֲ��û��long long���͵�C89��׼�£���Ҫ��ÿ��long long�ĳ� long�������ʹ���˱�����ֻ��Ҫ��ԭ�������޸�һ�¾Ϳ���
}

int main(void)
{
	char buf[1024];
	strcpy(buf, "hello");

	return EXIT_SUCCESS;
}