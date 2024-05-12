#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//输入特性：在主调函数中分配内存，被调函数使用(即，将内容输入到被调函数中操作)
//①
void func(char * buf)
{
	strcpy(buf,"helloworld");
}
void test01()
{
	//在test01中分配内存到栈上
	char buf[1024] = { 0 };
	func(buf);
	printf("%s\n", buf);
}
//②
printfString(char* str)
{
	printf("%s\n", str+6);
}
void test02()
{
	//在test02中分配内存到堆上
	char *p = malloc(1024);
	memset(p, 0, 64);
	strcpy(p, "helloworld");
	printfString(p);
	free(p);
	p = NULL;
}


//输出特性：在被调函数中分配内存，主调函数使用(即，将内容从被调函数中传回)
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