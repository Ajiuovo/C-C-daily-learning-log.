#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int str_times(char* str, char* substr, int n);
int str_times2(char* str, char* substr, int n);
int main11(void)
{
	char* str = "hellolllolloef";
	char* substr = "llo";
	int n = 0;
	int ret = str_times(str, substr, n);
	printf("%d", ret);
	return EXIT_SUCCESS;
}

//统计字符串中，子串出现次数:为什么这个不行呢，好奇怪  好像是因为strstr的返回值，如果str中不含substr，返回一个指针地址类型的null（？）
int str_times(char* str, char* substr, int n)
{

	while (str)
	{
		str = strstr(str, substr);	//str="llolllolloef"	str="llolloef"		str="lloef"			str="000000"
		//printf("%s",str);			//这里不能printf("%s",*str);  不知道为啥,,,,strstr函数返回的是一个特殊的字符串指针，不同于常规的char* str1，只能用数组名的方式输出，不能用*数组名，或数组名[]的方式访问。
		if (str)
		{			
			//printf("*str != NULL\n");
			n++;			
			str += strlen(substr);	//str="lllolloef"		str="lloef"			str="ef"
			//printf("str =%p\n",str);
		}		
	}
	return n;
}

//统计字符串中，子串出现次数：更好的标答
int str_times2(char* str, char* substr, int n)
{
	char* p = strstr(str, substr);
	while (p)
	{
		n++;
		p += strlen(substr);
		p = strstr(p, substr);

	}
	return n;
}