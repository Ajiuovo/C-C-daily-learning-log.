#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main04(void)
{
	char str1[] = { 'h','e','l','l','o','\0' };
	char str2[] = "hello";
	char* str3 = "hello";
	// char* str4= { 'h','e','l','l','o','\0' };//不行，错误！！！
	str1[0] = 'r';
	str2[0] = 'r';
	//str3[0] = 'r';			//不行，str3定义出来的是一个字符串常量，不能修改
	//*str3 = "hi";				//不行，str3定义出来的是一个字符串常量，不能修改
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	return EXIT_SUCCESS;
}