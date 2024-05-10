#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int* myFunc()
{
	int a = 10;
	return &a;
}
void test1()
{
	int* p = myFunc();
	printf("%d\n", *p);
	printf("%d\n", *p);			//≠10，局部变量已被释放了，这种使用方式是错误的

}
char* getString()
{
	char str[] = "helloworld.";
	return str;
}
void test2()
{
	char* p = NULL;
	p=getString();
	printf("%s\n", p);		//同理，局部变量str已被释放，构造函数不能返回局部变量的值
}
int main(void)
{
	//test1();
	test2();
	return EXIT_SUCCESS;
}