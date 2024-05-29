#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
void test01()
{
	//Q：一维数组名是不是指针
	int arr[3] = { 0,1,2 };
	printf("%d\n", sizeof(arr));		//12，指针应该始终大小是4，所以数组名并不能等价于指针
	//通常可以把数组名当作指针用
	//有两种特殊情况，一维数组名不是指向第一个元素的指针
	//1、sizeof()
	//2、对数组名取地址 得到的是数组指针，数值上等于整个数组的起始位置地址，含义上代表整个数组所占内存的大小，但步长是整个数组的长度
	printf("%d\n", &arr);
	printf("%d\n", &arr+1);

	//arr数组名  是一个数组常量  指针的指向不可以修改，而指针指向的值可以改
	arr[0] = 100;
	//arr = NULL;	//不可以

	//数组指针索引可不可以为负数：可以，通过指针偏移实现
	int* p = arr;
	p = p + 3;
	printf("%d\n", p[-1]);		//p[-1]≠arr[-1]
	printf("%d\n", *(p-2));
	
}
int main(void)
{
	test01();


	return EXIT_SUCCESS;
}