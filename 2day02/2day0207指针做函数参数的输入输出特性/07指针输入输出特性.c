#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//�������ԣ������������з����ڴ棬��������ʹ��(�������������뵽���������в���)
//��
void func(char * buf)
{
	strcpy(buf,"helloworld");
}
void test01()
{
	//��test01�з����ڴ浽ջ��
	char buf[1024] = { 0 };
	func(buf);
	printf("%s\n", buf);
}
//��
printfString(char* str)
{
	printf("%s\n", str+6);
}
void test02()
{
	//��test02�з����ڴ浽����
	char *p = malloc(1024);
	memset(p, 0, 64);
	strcpy(p, "helloworld");
	printfString(p);
	free(p);
	p = NULL;
}


//������ԣ��ڱ��������з����ڴ棬��������ʹ��(���������ݴӱ��������д���)
void allocateSpace(char** pp)
{
	char* str = malloc(64);
	memset(str, 0, 64);
	strcpy(str, "hello");
	*pp = str;
}
void test03()
{
	char* p = NULL;
	allocateSpace(&p);
	printf("%s\n", p);

}

int main(void)
{
	//test01();
	//test02();
	test03();

	return EXIT_SUCCESS;
}