#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main12(void)
{
	char* str = "wawigaojg";
	char *str2 = strstr(str, "jgg");
	//str = strstr(str, "jgg");
	/*while(!*str)
	{
		printf("aaaa\n");
		break;
	}*/
	/*while(!*str2)
	{
		printf("aaaa\n");
		break;
	}*/
	/*while(!str2)
	{
		printf("aaaa\n");
		break;
	}*/
	//总结，strstr函数的返回值为null时很特别，不可以用*str输出，为啥不知道，就是不可以。
	//貌似是因为，返回一个空指针，而不是指针指向的地方为空。
	//不对，好像是因为，返回的时字符串常量，常量不可以通过*str访问，也不能通过str[i]修改
	return EXIT_SUCCESS;
}


