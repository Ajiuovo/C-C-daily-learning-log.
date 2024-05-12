#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main03(void)
{
	FILE* fp = NULL;
	//fp = fopen("D:\\c++projects\\day10\\day10\\test1.txt","r");
	//fp = fopen("D:\\c++projects\\day10\\day10\\test.txt", "r");
	fp = fopen("D:\\c++projects\\day10\\day10\\test2.txt", "w");
	if (fp == NULL)
	{
		perror("fopen error");		//ÏêÏ¸Õ¹Ê¾´íÎó
		return -1;
	}
	/*else
	{
		fputs();
	}*/
	fclose(fp);
	printf("--------finish");
	return EXIT_SUCCESS;
}