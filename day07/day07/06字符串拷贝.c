#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void mystrcpy(char* str1, char* str2);
void mystrcpy2(char* str1, char* str2);
int main06(void)
{
	char* str1 = "hellop";		
	char str2[10] = {0};		//��ó�ʼ��Ϊ0�������Զ�����'\0'��β
	printf("%s", str2);
	//mystrcpy(str1, str2);
	mystrcpy2(str1, str2);
	printf("%s", str2);
	return EXIT_SUCCESS;
}

void mystrcpy(char* str1, char* str2)
{
	int i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
}

void mystrcpy2(char* str1, char* str2)
{	
	printf("%p\n", str2);
	while (*str1 != '\0')			//==>�൱��  *str1   ==>  �൱��*str1 != 0
	{
		*str2 = *str1;
		str1++;
		str2++;						//ҪС�����
	}
	*str2 = '\0';
	printf("%p\n", str2);
}
