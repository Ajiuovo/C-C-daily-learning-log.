#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//选择排序：按排序方式依次往出挑一个元素，放到正确位置
void mySort(int arr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		int min = i;
		for (size_t j = i+1; j < len; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}			
		}
		if (i != min)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}
void printfArray(int arr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}
void test01()
{
	int arr[] = { 2, 5, 1, 3, 4 };
	mySort(arr, 5);
	printfArray(arr, 5);
}

void selectSort(char* pArr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		int min = i;
		for (size_t j = i + 1; j < len; j++)
		{
			if (strcmp(pArr[min], pArr[j])==1)
			{
				min = j;
			}
		}
		if (i != min)
		{
			int temp = pArr[i];
			pArr[i] = pArr[min];
			pArr[min] = temp;
		}
	}
}
void printfArray2(char* pArr[], int len)
{
	for (size_t i = 0; i < len; i++)
	{
		printf("%s\n", pArr[i]);
	}
}
void test02()
{
	char* pArray[] = { "aaa","bbb","ccc","ddd","eee" };
	int len = sizeof(pArray)/sizeof(pArray[0]);
	//printf("%d\n", len);
	selectSort(pArray,len);
	printfArray2(pArray, len);
}
int main(void)
{
	//test01();
	test02();

	return EXIT_SUCCESS;
}