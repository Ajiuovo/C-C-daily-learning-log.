#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void)
{
	int a[] = { 1,3,61,34,632,56 };
	int b[3];
	//b = a;			//禁止，数组名b是地址常量，不可以被赋值修改

	int* p;
	p = a;
	int n = sizeof(a) / sizeof(a[0]);
	for (size_t i = 0; i < n; i++)
	{	
		//输出方式1：p等价于a
		//printf("%d\n", p[i]);
		
		//输出方式2：
		printf("%p\n", p);
		printf("%d\n", *(p+i));

		//输出方式3：打印结束后，p指向一块无效地址空间
		//printf("%d\n", *p);
		//p++;					

	}
	return EXIT_SUCCESS;

}