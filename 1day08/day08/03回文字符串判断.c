#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int str_abba(char* str);
int main03(void)
{
	char str[] = "abeeba";
	int ret = str_abba(str);
	printf("%d\n", ret);
	return EXIT_SUCCESS;
}
int str_abba(char* str)
{
	// 第二种写法：int i,j;			str[i]<str[j]
	// 第三种写法：int i,j;			*(str+i)<*(str+j)
	char* start = str;
	char* end = str+strlen(str)-1;
	/*while (start<=end)
	{
		if (*start != *end)
			return 0;
		start++;
		end--;
	}*/
	return 1;
}