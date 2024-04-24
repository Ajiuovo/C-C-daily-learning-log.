#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int mystrcmp(char* str1, char* str2);
int mystrcmp2(char* str1, char* str2);
int main05(void)
{	
	char* str1 = "hellop";
	char* str2 = "hello!";
	printf("%d\n", 'p');
	printf("%d\n", '!');
	printf("%d\n", '\0');
	int ret = mystrcmp(str1, str2);
	int ret2 = mystrcmp2(str1, str2);
	printf("%d\n", ret);
	printf("%d\n", ret2);
	return EXIT_SUCCESS;
}
int mystrcmp(char* str1,char* str2)
{
	int i = 0;
	while (str1[i] == str2[i])		//==>   *(str1+i)==*(str2+i)
	{
		if (str1[i] == '\0')
			return 0;
		i++;
	}
	return str1[i] > str2[i]?1:-1;
}

int mystrcmp2(char* str1, char* str2)
{
	int i = 0;
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 > *str2 ? 1 : -1;
}