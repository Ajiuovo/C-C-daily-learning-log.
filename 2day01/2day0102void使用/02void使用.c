#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1.void�����͡����ܴ���void���͵����ݣ����������ͣ�����η����ڴ�ռ䣿��˲�����
void test01()
{
	//void a = 10;	//������
}

//2����;1���޶���������ֵ���޶���������
void test02(void)
{
	return 10;
}
//void *����ָ��
void test03()
{
	printf("size of void *=%d\n", sizeof(void*));
	int* pInt = NULL;
	char* pChar = NULL;
	void* p = NULL;
	pChar = (char*)pInt;	//��ͬ����ָ�����ǿת��ֵ
	p = pChar;	//����ָ����Բ���ǿת

}

int main(void)
{
	test02(10);		//C����û��ô�ϸ�Ĳ���ִ�У����ᱨwarning
	test03();
	return EXIT_SUCCESS;
}


