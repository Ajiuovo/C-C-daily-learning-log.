#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//1��������NULL���߷Ƿ��ڴ濽������
void test01()
{
	/*char* p = NULL;
	strcpy(p, "111");			//err
	char* q = 0x1122;
	strcpy(q, "wrda");			//err
	*/
}

//�۱�����Խ������
int* doWork()
{
	int a = 10;
	int* p = &a;
	printf("%d\n",*p);
	return p;
}


//2��Ұָ��������
void test02()
{
	////��ָ�����δ��ʼ��
	//int* p;
	//printf("%d\n", *p);
	////��ָ���ͷź�δ�ÿ�
	//char* str = malloc(100);
	//free(str);
	////��ס�ͷź��ÿգ���ֹҰָ����֣�
	//str = NULL;
	//free(str);		//Ұָ�벻�����ظ��ͷţ���ָ�����
}
int main(void)
{

	//test01();
	//test02();
	int* a = doWork();
	printf("%d\n", *a);
	printf("%d\n", *a);
	return EXIT_SUCCESS;
}