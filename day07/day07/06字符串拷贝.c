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
	char str2[10] = {0};		//最好初始化为0，这样自动就有'\0'结尾
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
	while (*str1 != '\0')			//==>相当于  *str1   ==>  相当于*str1 != 0
	{
		*str2 = *str1;
		str1++;
		str2++;						//要小心溢出
	}
	*str2 = '\0';
	printf("%p\n", str2);
}
