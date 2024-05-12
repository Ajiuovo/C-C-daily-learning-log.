#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
void mystrch(char* str, int* ch, char c);
void mystrch2(char* str, int* ch, char c);
int main08(void)
{
	char* str = "helloworld!";
	int* ch[10] = { 0 };
	int* ch2[10] = { 0 };
	mystrch(str, ch, 'l');
	mystrch(str, ch2, 'o');
	for (size_t i = 0; i < 10; i++)
	{
		printf("%d  ", ch[i]);
		printf("%d  ", ch2[i]);
		printf("\n");
	}
	return EXIT_SUCCESS;
}

void mystrch(char* str,int *ch,char c)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			*ch = i+1;
			ch++;
		}
		i++;
	}
}


void mystrch2(char* str, int* ch, char c)
{
	char* str2 = str;
	while (*str)
	{
		if (*str == c)
		{
			*ch = str-str2;
			ch++;
		}
		str++;
	}
}