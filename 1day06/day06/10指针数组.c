#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//ָ������1
int main1001(void)
{
	//int arr[] = { 1,24,5,12,61 };
	int	a = 10;
	int	b = 20;
	int	c = 30;
	int* p1 = &a;
	int* p2 = &b;
	int* p3 = &c;
	int* arr[] = {p1,p2,p3};		//ָ�����飬��Ķ������͵�ַ
	printf("%d\n", *(arr[0]));	//arr[0]=*(arr+0)
	printf("%d\n", **arr);
	printf("%d\n", *(*(arr+1)));

	//ָ������       ����������һ������ָ�롣
	return EXIT_SUCCESS;
}

//ָ������2
int main1002(void)
{
	//int arr[] = { 1,24,5,12,61 };
	int	a[] = { 10 };
	int	b[] = { 20 };
	int	c[] = { 30 };
	int* arr[] = { a,b,c };		//ָ�����飬��Ķ������͵�ַ
	printf("%d\n", *(arr[0]));	//arr[0][0] = *(*(arr+0)+0)= **arr

	//ָ������       ����������һ������ָ�롣
	return EXIT_SUCCESS;
}