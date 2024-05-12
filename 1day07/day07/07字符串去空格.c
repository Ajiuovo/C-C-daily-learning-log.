#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void strnospace(char* str1, char* str2);
void strnospace2(char* str1, char* str2);
int main07(void)
{
	char* str1 = "hello world !";
	char* str2[30] = {0};
	char* str3[30] = { 0 };
	strnospace(str1, str2);
	strnospace2(str1, str3);
	printf("%s\n", str2);
	printf("%s\n", str3);
	return EXIT_SUCCESS;
}

void strnospace(char* str1,char *str2)
{
	while (*str1 != '\0')
	{
		if (*str1 == ' ')
		{
			str1++;
			continue;
		}
		else {
			*str2 = *str1;
			str1++;
			str2++;
		}
	}
	str2 = '\0';
}

void strnospace2(char* str1, char* str2)
{
	int i = 0;
	int j = 0;
	while (str1[i] != '\0')
	{
		if (str1[i] != ' ')
		{
			str2[j] = str1[i];
			j++;
		}		
		i++;
	}
	str2[j] = '\0';
}