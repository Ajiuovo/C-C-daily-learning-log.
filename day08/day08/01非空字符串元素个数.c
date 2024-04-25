#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int no_space_times(char* str);
int main01(void)
{
	char str[]= "ni chou sha chou ni za id";	
	int ret = no_space_times(str);
	printf("%d\n", ret);
	return EXIT_SUCCESS;
}

int no_space_times(char* str)
{
	int count = 0;
	char* p = str;
	while (*p)
	{
		if (*p != ' ')
		{
			count++;
		}
		p++;
	}
	return count;
}