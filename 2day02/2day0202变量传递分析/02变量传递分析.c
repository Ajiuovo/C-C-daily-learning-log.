#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void func()
{
	int c = 30;		//在func中可以使用
}

char* test01()
{
	int b = 10;		//在test01和func中可以使用
	func();


	char* p = malloc(10);	//堆区只要没有被free  都可以使用

	printf("%p\n", p);
	return p;
}
int main(void)
{
	int a = 10;	 //在main、test01、func中都可以使用
	char* p = test01();
	printf("%p", p);
	return EXIT_SUCCESS;
}