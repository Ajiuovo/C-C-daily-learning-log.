#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int mystrlen(const char* str[]);
int mystrlen2(const char* str[]);
int main08(void)
{
	char str[] = "hello";
	int len = mystrlen(str);
	int len2 = mystrlen("adg");
	printf("%d\n", len);
	printf("%d\n", len2);
	return EXIT_SUCCESS;
}
//指针实现
int mystrlen(const char* str[])
{
	char* p=str;
	while (*p!='\0')
	{		
		p++;
	}
	return p-str;
}

//不用指针实现
int mystrlen2(const char* str[])
{
	int len = 0;	
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}