#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//�����������޸ķ�ʽ
void test01()
{
	int a = 10;
	a = 20;

	int b = 10; 
	int* p = &b; 
	*p = 20;
}

//���Զ���ṹ���ͱ����޸�
typedef struct Person
{
	int age;
	char name[64];
}myp;
void test02()
{
	struct Person p = { 10,"aaa" };
	myp p2 = { 10,"aaa" };
	//ֱ���޸�
	p2.age = 12;
	//ͨ��ָ�����޸�
	struct Person* pp = &p;
	pp->age = 23;
	printf("p2.age=%d\n", p2.age);
	printf("p.age=%d\n", pp->age);
	//ͨ��ָ��ƫ���޸�name
	char* p3 = &p;
	strcpy(p3 + 4, "hhh");
	printf("%s\n", p3 + 4);
	//ͨ��ָ��ƫ���޸�age
	char* p4 = &p;
	*(int*)(p4+0) = 100;	//��Ϊage�ǵ�һ��Ԫ�أ����ԾͲ�ƫ���ˡ�
	printf("p4.age=%d\n", *(int*)p4);


}


int main(void)
{

	test02();
	return EXIT_SUCCESS;
}